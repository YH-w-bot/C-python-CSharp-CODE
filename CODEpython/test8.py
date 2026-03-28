print("请输入地区编号（三选壹）：华东地区（01）、华南地区（02）、华北地区（03）")
area_code = input("请输入地区编号：")
weight = int(input ("请输入货物重量：（单位：千克）"))
while True:
    if area_code == "01":
        if weight <=2:
            print ("运费为：13元")
        else:
            print (f"运费为：{13+(weight-2)*3}元")
 
#             if area_code == "02":
#                 if weight <=2:
#                     print ("运费为：12元")
#             else:
#                 print (f"运费为：{13+(weight-2)*3}元")
#                 if area_code == "03":
#                     if weight <=2:
#                         print ("运费为：14元")
#                 else:
#                     print (f"运费为：{13+(weight-2)*3}元")
# print ("输入错误")