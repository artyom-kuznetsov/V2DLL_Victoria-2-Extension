// FUN_00795b80 @ 00795b80 body=[[00795b80, 00795be6]]


int FUN_00795b80(char param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  
  puVar2 = unaff_ESI + 0x43;
  if (param_1 == '\0') {
    puVar2 = unaff_ESI + 0x3c;
  }
  iVar1 = (**(code **)(*DAT_01258a80 + 0x48))(puVar2);
  iVar1 = *(int *)(iVar1 + 0xac);
  puVar2 = unaff_ESI + 0x35;
  if (param_1 == '\0') {
    puVar2 = unaff_ESI + 0x2e;
  }
  iVar3 = (**(code **)(*(int *)*unaff_ESI + 0x7c))(puVar2);
  return (int)(short)((uint)*(undefined4 *)(iVar3 + 0xe8) >> 0x10) / iVar1;
}

