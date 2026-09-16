func kidsWithCandies(candies []int, extraCandies int) []bool {
    maxCandies := 0

    for _, candy := range candies {
        if candy > maxCandies {
            maxCandies = candy
        }
    }

    result := []bool{}


    for _, candy := range candies {
        if candy+extraCandies >= maxCandies {
            result = append(result, true)
        } else {
            result = append(result, false)
        }
    }

    return result
}