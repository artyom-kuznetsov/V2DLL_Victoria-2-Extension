// FUN_00b2da40 @ 00b2da40 body=[[00b2da40, 00b2db3d]]


undefined4 FUN_00b2da40(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  int unaff_EBX;
  uint uVar4;
  size_t _Size;
  
  iVar1 = *(int *)(unaff_EBX + 0x1c);
  if (*(int *)(iVar1 + 0x34) == 0) {
    iVar2 = (**(code **)(unaff_EBX + 0x20))
                      (*(undefined4 *)(unaff_EBX + 0x28),
                       1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f),1);
    *(int *)(iVar1 + 0x34) = iVar2;
    if (iVar2 == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar1 + 0x28) == 0) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(int *)(iVar1 + 0x28) = 1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f);
  }
  uVar4 = in_EAX - *(int *)(unaff_EBX + 0x10);
  uVar3 = *(uint *)(iVar1 + 0x28);
  if (uVar3 <= uVar4) {
    FID_conflict__memcpy(*(void **)(iVar1 + 0x34),(void *)(*(int *)(unaff_EBX + 0xc) - uVar3),uVar3)
    ;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(iVar1 + 0x30) = 0;
    return 0;
  }
  uVar3 = uVar3 - *(int *)(iVar1 + 0x30);
  if (uVar4 < uVar3) {
    uVar3 = uVar4;
  }
  FID_conflict__memcpy
            ((void *)(*(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x30)),
             (void *)(*(int *)(unaff_EBX + 0xc) - uVar4),uVar3);
  _Size = uVar4 - uVar3;
  if (_Size != 0) {
    FID_conflict__memcpy(*(void **)(iVar1 + 0x34),(void *)(*(int *)(unaff_EBX + 0xc) - _Size),_Size)
    ;
    *(size_t *)(iVar1 + 0x30) = _Size;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    return 0;
  }
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + uVar3;
  if (*(uint *)(iVar1 + 0x30) == *(uint *)(iVar1 + 0x28)) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  if (*(uint *)(iVar1 + 0x2c) < *(uint *)(iVar1 + 0x28)) {
    *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) + uVar3;
  }
  return 0;
}

