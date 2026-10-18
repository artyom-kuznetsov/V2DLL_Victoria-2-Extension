// FUN_008c9620 @ 008c9620 body=[[008c9620, 008c96f4]]


void FUN_008c9620(int param_1,int param_2,char param_3)

{
  int in_ECX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  
  local_14 = *(int *)(param_2 + 0xc);
  local_18 = *(undefined4 *)(param_2 + 8);
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') goto LAB_008c969c;
    iVar2 = *(int *)(param_2 + 0x24);
    if (*(int *)(iVar2 + 0x30) == 0) {
      iVar2 = *(int *)(iVar2 + 0x34);
      goto LAB_008c967a;
    }
    local_14 = *(int *)(iVar2 + 0x30);
    local_18 = *(undefined4 *)(iVar2 + 0x2c);
  }
  else {
    iVar2 = *(int *)(param_2 + 0x24);
    if (*(int *)(iVar2 + 0xc) == 0) {
      iVar2 = *(int *)(iVar2 + 0x10);
LAB_008c967a:
      iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar2 * 4);
      local_18 = *(undefined4 *)(iVar2 + 0x130);
      local_14 = *(int *)(iVar2 + 0x134);
    }
    else {
      local_14 = *(int *)(iVar2 + 0xc);
      local_18 = *(undefined4 *)(iVar2 + 8);
    }
  }
LAB_008c969c:
  if ((local_14 == *(int *)(param_1 + 0xc)) || (*(int *)(param_2 + 0xc) == *(int *)(param_1 + 0xc)))
  {
    local_10 = *(undefined4 *)(param_1 + 8);
    puVar1 = (undefined4 *)(param_2 + 8);
    if (local_14 != *(int *)(param_1 + 0xc)) {
      puVar1 = &local_18;
    }
    if (param_3 != '\0') {
      FUN_0085bc30(param_1,*puVar1,puVar1[1]);
      return;
    }
    FUN_0085bde0(param_1,*puVar1,puVar1[1]);
  }
  return;
}

