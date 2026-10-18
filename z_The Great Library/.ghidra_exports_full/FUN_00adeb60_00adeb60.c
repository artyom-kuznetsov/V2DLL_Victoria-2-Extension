// FUN_00adeb60 @ 00adeb60 body=[[00adeb60, 00adec28]]


void FUN_00adeb60(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b37877;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0xca;
  local_4 = 2;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[5] = 0;
  in_ECX[4] = 0;
  *(undefined2 *)(in_ECX + 3) = 0xca;
  *(undefined2 *)(in_ECX + 0xf) = 0xca;
  FUN_00ade020(uVar1);
  if (param_2 != 0) {
    uVar2 = (*(code *)PTR_FUN_00f01b08)(param_2 * 0xc,0xca,0x20,100,0,0);
    in_ECX[4] = uVar2;
  }
  in_ECX[6] = param_1;
  in_ECX[7] = param_2 * 3;
  in_ECX[5] = param_3;
  ExceptionList = local_c;
  return;
}

