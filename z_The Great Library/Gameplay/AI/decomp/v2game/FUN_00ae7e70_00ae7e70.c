// FUN_00ae7e70 @ 00ae7e70 body=[[00ae7e70, 00ae7f55]]


void FUN_00ae7e70(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00b37efa;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 1;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *(undefined2 *)(in_ECX + 7) = 1;
  local_4 = 1;
  uStack_3 = 0;
  FUN_00b1b450(uVar1);
  _local_4 = CONCAT31(uStack_3,2);
  in_ECX[8] = 0;
  in_ECX[9] = 0x200000;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  FUN_00ae7c40(1);
  FUN_00b1bca0(&DAT_00ef9300,0x102);
  if ((uint)in_ECX[2] < 1000) {
    if (*in_ECX == 0) {
      iVar2 = (*(code *)PTR_FUN_00f01b08)(20000,(short)in_ECX[3],4,2,0,0xffffffff);
    }
    else {
      iVar2 = (*(code *)PTR_FUN_00f01b0c)(*in_ECX,20000,(short)in_ECX[3]);
    }
    *in_ECX = iVar2;
    in_ECX[2] = 1000;
  }
  ExceptionList = local_c;
  return;
}

