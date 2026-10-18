// FUN_00b0b110 @ 00b0b110 body=[[00b0b110, 00b0b1f9]]


void FUN_00b0b110(char *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b392e2;
  local_c = ExceptionList;
  uVar5 = DAT_00ef259c ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  *(undefined2 *)(in_ECX + 3) = 0x137;
  *(undefined2 *)(in_ECX + 7) = 0x137;
  in_ECX[0xe] = param_2;
  local_4 = 3;
  uVar6 = FUN_00b164b0(uVar5);
  in_ECX[0xf] = uVar6;
  *(undefined1 *)((int)in_ECX + 0x41) = 1;
  pcVar7 = param_1;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_00b137d0(param_1,(int)pcVar7 - (int)(param_1 + 1));
  iVar3 = *(int *)(DAT_00f209e0 + 0x34);
  iVar4 = *(int *)(iVar3 + 0x14);
  uVar5 = iVar4 + 1;
  *(uint *)(iVar3 + 0x14) = uVar5;
  if (*(uint *)(iVar3 + 0x18) < uVar5) {
    FUN_00aeb6c0(iVar4 + 2);
  }
  puVar1 = (undefined4 *)(*(int *)(iVar3 + 0x10) + -4 + *(int *)(iVar3 + 0x14) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = in_ECX;
  }
  ExceptionList = local_c;
  return;
}

