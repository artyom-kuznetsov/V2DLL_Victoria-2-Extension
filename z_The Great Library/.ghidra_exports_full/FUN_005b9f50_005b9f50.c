// FUN_005b9f50 @ 005b9f50 body=[[005b9f50, 005b9fae]]


void FUN_005b9f50(void)

{
  uint uVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined4 unaff_EDI;
  
  if (*(int *)(in_EAX + 4) != 0) {
    *(int *)(in_EAX + 8) = *(int *)(in_EAX + 8) + 1;
    uVar1 = *(int *)(in_EAX + 0xc) * 2;
    if (uVar1 <= *(uint *)(in_EAX + 8)) {
      *(uint *)(in_EAX + 0xc) = uVar1;
    }
    FUN_005ba0f0(unaff_EDI,*(uint *)(in_EAX + 8),*(undefined4 *)(in_EAX + 0xc),
                 *(undefined4 *)(in_EAX + 0xc));
    return;
  }
  *(undefined4 *)(in_EAX + 8) = 1;
  *(undefined4 *)(in_EAX + 0xc) = 1;
  puVar2 = (undefined4 *)FUN_00aae9af(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = unaff_EDI;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined4 **)(in_EAX + 4) = puVar2;
    return;
  }
  *(undefined4 *)(in_EAX + 4) = 0;
  return;
}

