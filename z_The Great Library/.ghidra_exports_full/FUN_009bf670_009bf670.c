// FUN_009bf670 @ 009bf670 body=[[009bf670, 009bf6cc] [009bf6d0, 009bf762]]


void FUN_009bf670(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_18;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x144) + 0xc);
  iVar2 = *(int *)(*(int *)(param_1 + 0x144) + 0x14);
  piVar4 = (int *)(*(int *)(param_1 + 0x140) + 0x10c);
  local_18 = 0;
  if (0 < (int)(*(int *)(*(int *)(param_1 + 0x140) + 0x110) - *piVar4 & 0xfffffffcU)) {
    do {
      iVar3 = *(int *)(*piVar4 + local_18 * 4);
      iVar7 = 0;
      if (0 < (int)(*(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18) & 0xfffffffcU)) {
        iVar6 = 0;
        do {
          iVar5 = *(int *)(*(int *)(iVar3 + 0x18) + iVar7 * 4) * 0x40;
          FID_conflict__memcpy
                    ((void *)(*(int *)(*(int *)(param_1 + 0x148) + local_18 * 4) + iVar6),
                     (void *)(iVar5 + iVar2),0x40);
          FUN_009c0960(iVar5 + iVar1);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x40;
        } while (iVar7 < *(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18) >> 2);
      }
      iVar3 = *(int *)(param_1 + 0x140);
      piVar4 = (int *)(iVar3 + 0x10c);
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(iVar3 + 0x110) - *(int *)(iVar3 + 0x10c) >> 2);
  }
  return;
}

