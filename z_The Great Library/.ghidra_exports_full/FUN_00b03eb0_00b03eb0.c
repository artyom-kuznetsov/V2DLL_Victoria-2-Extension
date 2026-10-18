// FUN_00b03eb0 @ 00b03eb0 body=[[00b03eb0, 00b03f48]]


void FUN_00b03eb0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  short sVar4;
  int *in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar2 = FUN_00b31c00();
  uVar3 = FUN_00b31c00();
  local_c = CONCAT22(uVar3,uVar2);
  uVar2 = FUN_00b31c00();
  uVar3 = FUN_00b31c00();
  local_8 = CONCAT22(uVar3,uVar2);
  sVar4 = (short)in_ECX[1] + 1;
  *(short *)(in_ECX + 1) = sVar4;
  FUN_00b00890(sVar4);
  puVar1 = (undefined4 *)(*in_ECX + (uint)(ushort)((short)in_ECX[1] - 1) * 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = local_c;
    puVar1[1] = local_8;
    puVar1[2] = param_1;
  }
  return;
}

