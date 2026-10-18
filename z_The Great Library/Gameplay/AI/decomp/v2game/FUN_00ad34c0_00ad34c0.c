// FUN_00ad34c0 @ 00ad34c0 body=[[00ad34c0, 00ad35d9]]


void FUN_00ad34c0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00b36d39;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_4 = 3;
  uStack_3 = 0;
  FUN_00b13d30(local_18,&DAT_00e37888,0x4022000000000000,uVar1);
  FUN_00b13c30();
  FUN_00b13c30();
  FUN_00b13c90();
  FUN_00b13c90();
  FUN_00b13d30();
  FUN_00b137d0("Mar  3 2011",0xb);
  in_ECX[9] = 3;
  in_ECX[10] = 900;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  _local_4 = CONCAT31(uStack_3,2);
  FUN_00b13650();
  ExceptionList = local_c;
  return;
}

