for _ in range(int(input())):
    n, q = map(int, input().split())
    a = list(map(int, input().split()))
    
    prefix = [0]
    for x in a:
        prefix.append(prefix[-1] + x)
    
    total_sum = prefix[n]
    
    def get_range_sum(start_pos, end_pos, shift_offset):
        start_orig = (start_pos + shift_offset) % n
        end_orig = (end_pos + shift_offset) % n
        
        if start_orig <= end_orig:
            return prefix[end_orig + 1] - prefix[start_orig]
        else:
            return (prefix[n] - prefix[start_orig]) + prefix[end_orig + 1]
    
    for _ in range(q):
        l, r = map(int, input().split())
        l -= 1
        r -= 1
        
        start_shift = l // n
        end_shift = r // n
        
        result = 0
        
        if start_shift == end_shift:
            start_pos = l % n
            end_pos = r % n
            result = get_range_sum(start_pos, end_pos, start_shift)
        else:
            
            start_pos = l % n
            end_pos = n - 1
            result += get_range_sum(start_pos, end_pos, start_shift)
            
            complete_shifts = end_shift - start_shift - 1
            result += complete_shifts * total_sum
            
            start_pos = 0
            end_pos = r % n
            result += get_range_sum(start_pos, end_pos, end_shift)
        
        print(result)