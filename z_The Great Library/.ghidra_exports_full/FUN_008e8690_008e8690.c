// FUN_008e8690 @ 008e8690 body=[[008e8690, 008e877c]]


int FUN_008e8690(int param_1)

{
  char cVar1;
  uint3 uVar3;
  uint *puVar2;
  int in_ECX;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if (cVar1 != '\0') {
    local_10._0_4_ = *(uint *)(*(int *)(param_1 + 0x14) + 0x128);
    local_10._4_4_ = *(uint *)(*(int *)(param_1 + 0x14) + 300);
    goto LAB_008e86fd;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      puVar2 = (uint *)FUN_0096ba50(&local_10);
      local_10._0_4_ = *puVar2;
      local_10._4_4_ = puVar2[1];
      goto LAB_008e86fd;
    }
    if (0 < *(int *)(param_1 + 0x10)) {
      puVar2 = (uint *)FUN_0096ba50(&local_10);
      local_10._0_4_ = *puVar2;
      local_10._4_4_ = puVar2[1];
      goto LAB_008e86fd;
    }
  }
  else {
    local_10 = CONCAT44(local_10._4_4_,*(undefined4 *)(param_1 + 8));
    FUN_0096ba50(&local_10);
  }
LAB_008e86fd:
  uVar3 = (uint3)(local_10._4_4_ >> 8);
  if ((*(int *)(in_ECX + 0x24) <= (int)local_10._4_4_) &&
     ((*(int *)(in_ECX + 0x24) < (int)local_10._4_4_ || (*(uint *)(in_ECX + 0x20) <= (uint)local_10)
      ))) {
    return CONCAT31(uVar3,1);
  }
  return (uint)uVar3 << 8;
}

