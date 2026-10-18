// FUN_008da4d0 @ 008da4d0 body=[[008da4d0, 008da581]]


void FUN_008da4d0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') {
      local_14 = *(int *)(in_ECX + 0x20);
      local_18 = *(undefined4 *)(in_ECX + 0x1c);
    }
    else {
      local_18 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x2c);
      local_14 = *(int *)(*(int *)(param_2 + 0x24) + 0x30);
    }
  }
  else {
    FUN_008a8dc0();
  }
  if ((*(int *)(param_2 + 0xc) == *(int *)(param_1 + 0xc)) || (local_14 == *(int *)(param_1 + 0xc)))
  {
    local_10 = *(undefined4 *)(param_1 + 8);
    puVar3 = (undefined4 *)(param_2 + 8);
    if (local_14 != *(int *)(param_1 + 0xc)) {
      puVar3 = &local_18;
    }
    uVar1 = puVar3[1];
    uVar2 = *puVar3;
    FUN_0085bde0(param_1,uVar2,uVar1);
    FUN_0085bc30(param_1,uVar2,uVar1);
  }
  return;
}

