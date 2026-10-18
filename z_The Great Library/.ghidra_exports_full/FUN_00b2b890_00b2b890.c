// FUN_00b2b890 @ 00b2b890 body=[[00b2b890, 00b2b8d9]]


int FUN_00b2b890(undefined4 param_1,uint *param_2)

{
  int iVar1;
  uint local_c;
  int local_8;
  
  iVar1 = FUN_00b2b7e0(param_1,&local_c);
  if (iVar1 == 0) {
    if (((local_8 != 0) || (0x7fffffff < local_c)) || (0x3ffffff < local_c)) {
      return -0x7fffbfff;
    }
    *param_2 = local_c;
    iVar1 = 0;
  }
  return iVar1;
}

