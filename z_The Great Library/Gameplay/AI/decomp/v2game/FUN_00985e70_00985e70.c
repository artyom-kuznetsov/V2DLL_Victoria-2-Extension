// FUN_00985e70 @ 00985e70 body=[[00985e70, 00985e9d]]


void FUN_00985e70(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_00868080();
  iVar1 = FUN_008676e0();
  iVar1 = *(int *)(iVar1 + 0x74c);
  if (iVar1 != 3) {
    iVar1 = iVar1 + 1;
  }
  FUN_00867dd0(*(int *)(in_ECX + 0x28),*(undefined4 *)(*(int *)(in_ECX + 0x28) + 0x38),iVar1);
  return;
}

