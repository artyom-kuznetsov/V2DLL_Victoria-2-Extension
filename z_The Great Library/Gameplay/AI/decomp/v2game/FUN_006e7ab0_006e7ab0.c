// FUN_006e7ab0 @ 006e7ab0 body=[[006e7ab0, 006e7b65]]


void FUN_006e7ab0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 local_10;
  
  *(undefined1 *)(in_ECX + 8) = 1;
  if (*(int *)(in_ECX + 4) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x34))();
  }
  iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  local_10._1_3_ = (uint3)((uint)*(undefined4 *)(DAT_012588e8 + 0xb5c) >> 8);
  if (*(int *)(*(int *)(in_ECX + 0x1100) + 0x5c) == *(int *)(DAT_012588e8 + 0xb60)) {
    uVar1 = *(undefined1 *)(iVar3 + 0xaf0);
    uVar2 = *(undefined1 *)(iVar3 + 0xaf8);
    local_10 = CONCAT31(local_10._1_3_,*(undefined1 *)(iVar3 + 0xad8));
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
    local_10 = (uint)local_10._1_3_ << 8;
  }
  iVar3 = in_ECX + 0x14;
  iVar4 = 8;
  do {
    FUN_006e3540(iVar3,uVar1,local_10,uVar2);
    iVar3 = iVar3 + 0x21c;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

