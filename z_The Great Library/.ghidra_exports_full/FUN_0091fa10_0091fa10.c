// FUN_0091fa10 @ 0091fa10 body=[[0091fa10, 0091fbfc] [0091fc00, 0091fc3d]]


void FUN_0091fa10(int param_1,char param_2)

{
  void *_Dst;
  int iVar1;
  int *piVar2;
  char cVar3;
  uint *in_EAX;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_24 [2];
  uint *local_1c;
  uint local_18;
  undefined4 local_10;
  
  _Dst = (void *)*in_EAX;
  if (_Dst != (void *)in_EAX[1]) {
    FID_conflict__memcpy(_Dst,(void *)in_EAX[1],0);
    in_EAX[1] = (uint)_Dst;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    local_10 = *(undefined4 *)(param_1 + 8);
    local_1c = *(uint **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                    *(int *)(param_1 + 0xc) * 4) + 0xbe8) +
                                  *(int *)(param_1 + 0x2c) * 4) + 0x34);
    if (local_1c != (uint *)0x0) {
      iVar1 = *(int *)((int)local_1c + 0x30);
      iVar6 = *(int *)((int)local_1c + 0x2c);
      if (iVar6 != iVar1) {
        do {
          if (*(int *)(iVar6 + 4) == *(int *)(param_1 + 0xc)) break;
          iVar6 = iVar6 + 8;
        } while (iVar6 != iVar1);
      }
      cVar3 = FUN_00939450(local_1c,param_1 + 0x10,iVar6 != iVar1,1,0);
      if ((cVar3 != '\0') || (param_2 == '\0')) {
        FUN_0068f390();
      }
    }
    return;
  }
  local_1c = (uint *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xda8);
  local_18 = *local_1c;
LAB_0091fa81:
  if (local_18 < *local_1c) {
    return;
  }
  if (local_1c[1] <= local_18) {
    return;
  }
  uVar7 = local_18 + 8;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(param_1 + 0xc) * 4) + 0xbe8) +
                           *(int *)(local_18 + 4) * 4) + 0x34);
  piVar2 = (int *)in_EAX[1];
  piVar4 = (int *)*in_EAX;
  local_18 = uVar7;
  if (piVar4 != piVar2) goto LAB_0091fad5;
  goto LAB_0091fae4;
LAB_0091fad5:
  do {
    if (*piVar4 == iVar1) break;
    piVar4 = piVar4 + 1;
  } while (piVar4 != piVar2);
  if (piVar4 != piVar2) goto LAB_0091fa81;
LAB_0091fae4:
  iVar6 = *(int *)(iVar1 + 0x30);
  iVar5 = *(int *)(iVar1 + 0x2c);
  if (iVar5 != iVar6) {
    do {
      if (*(int *)(iVar5 + 4) == *(int *)(param_1 + 0xc)) break;
      iVar5 = iVar5 + 8;
    } while (iVar5 != iVar6);
  }
  local_24[0] = iVar1;
  cVar3 = FUN_00939450(iVar1,param_1 + 0x10,iVar5 != iVar6,0,0);
  if (((cVar3 == '\0') && (param_2 != '\0')) ||
     ((iVar6 = *(int *)(param_1 + 0xc), *(int *)(*(int *)(iVar1 + 0x2c) + 4) != iVar6 &&
      (((*(int *)(*(int *)(iVar1 + 0x3c) + 4) != iVar6 &&
        (iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x14) * 4),
        local_10 = *(undefined4 *)(iVar5 + 0xcf8), iVar6 != *(int *)(iVar5 + 0xcfc))) &&
       (param_2 != '\0')))))) goto LAB_0091fa81;
  piVar2 = (int *)in_EAX[1];
  if (local_24 < piVar2) {
    piVar4 = (int *)*in_EAX;
    if (piVar4 <= local_24) {
      if (piVar2 == (int *)in_EAX[2]) {
        FUN_00a513f0();
      }
      if ((undefined4 *)in_EAX[1] != (undefined4 *)0x0) {
        *(undefined4 *)in_EAX[1] = *(undefined4 *)(*in_EAX + ((int)local_24 - (int)piVar4 >> 2) * 4)
        ;
      }
      goto LAB_0091fa7a;
    }
  }
  if (piVar2 == (int *)in_EAX[2]) {
    FUN_00a513f0();
  }
  if ((int *)in_EAX[1] != (int *)0x0) {
    *(int *)in_EAX[1] = iVar1;
  }
LAB_0091fa7a:
  in_EAX[1] = in_EAX[1] + 4;
  goto LAB_0091fa81;
}

