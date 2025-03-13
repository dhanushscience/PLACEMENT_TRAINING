mahesh_land = 80
no_segments = 5

tomato_sp = 7
potato_sp = 20
cabbage_sp = 24
sunflower_sp = 200
sugarcane_sp = 4000 # per tonne

each_segment = mahesh_land // no_segments

tomato_yeild_30 = 0.3 * each_segment * 10
tomato_yeild_70 = 0.7 * each_segment * 12

potato_yeild = each_segment * 10 * 1000
cabbage_yeild = each_segment * 14 * 1000
sunflower_yeild = each_segment * 0.7 * 1000
sugarcane_yeild = each_segment * 45

tomato_sales = tomato_yeild_30 * tomato_sp + tomato_yeild_70 * tomato_sp
potato_sales = potato_yeild * potato_sp
cabbage_sales = cabbage_yeild * cabbage_sp
sunflower_sales = sunflower_yeild * sunflower_sp
sugarcane_sales = sugarcane_yeild * sugarcane_sp

total_sales = tomato_sales + potato_sales + cabbage_sales + sunflower_sales + sugarcane_sales

print("-----------------------------------")
print(f"\nTomato Sales:       {tomato_sales:.2f}")
print(f"Potato Sales:       {potato_sales:.2f}")
print(f"cabbage Sales:      {cabbage_sales:.2f}")
print(f"Sunflower Sales:    {sunflower_sales:.2f}")
print(f"Sugarcane Sales:    {sugarcane_sales:.2f}")
print("-----------------------------------")
print(f"TOTAL SALES:        {total_sales:.2f}\n")
print("-----------------------------------")
print(f"TOTAL SALES IN 11 MONTH: {(total_sales-sugarcane_sales):.2f}")
print("-----------------------------------")
