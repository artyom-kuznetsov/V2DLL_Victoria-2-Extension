// FUN_00aecf00 @ 00aecf00 body=[[00aecf00, 00aecf83] [00aecf90, 00aed014] [00aed020, 00aed09a] [00aed0a0, 00aed12d] [00aed130, 00aed1c2]]


void FUN_00aecf00(int *param_1,float param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = param_3[0x24];
  iVar2 = *(int *)(iVar1 + 0x1ac);
  if (param_3[0x14] == 0) {
    if (param_3[0x26] == 1) {
      param_3 = (int *)(uint)*(ushort *)(iVar1 + 400);
      if (*(ushort *)(iVar1 + 400) != 0) {
        iVar8 = 0;
        do {
          uVar5 = (uint)*(ushort *)(iVar8 + *(int *)(iVar1 + 0x18c));
          iVar3 = uVar5 * 0x38;
          FUN_00aebeb0(iVar1,*(undefined4 *)(*(int *)(iVar2 + 0x80) + uVar5 * 4),*in_ECX + iVar3,
                       *param_1 + iVar3,param_2,*param_4 + iVar3);
          iVar8 = iVar8 + 2;
          param_3 = (int *)((int)param_3 - 1);
        } while (param_3 != (int *)0x0);
        return;
      }
    }
    else {
      if (1.0 <= param_2) {
        FUN_00aecc30(param_4,iVar1);
        return;
      }
      if (param_2 <= 0.0) {
        if (param_4 != in_ECX) {
          FUN_00aecc30(param_4,iVar1);
          return;
        }
      }
      else {
        uVar5 = *(uint *)(iVar1 + 400);
        uVar7 = 0;
        if (uVar5 != 0) {
          do {
            iVar2 = (uint)*(ushort *)(*(int *)(iVar1 + 0x18c) + uVar7 * 2) * 0x38;
            FUN_00aebc80(*in_ECX + iVar2,*param_1 + iVar2,param_2,*param_4 + iVar2);
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar5);
          return;
        }
      }
    }
  }
  else {
    uVar7 = 0;
    uVar5 = *(uint *)(iVar1 + 400);
    if (param_3[0x26] == 1) {
      if (uVar5 != 0) {
        do {
          fVar4 = 1.0;
          uVar6 = (uint)*(ushort *)(*(int *)(iVar1 + 0x18c) + uVar7 * 2);
          if ((*(short *)(*param_3 + uVar6 * 2) != -1) && (param_3[0x14] != 0)) {
            fVar4 = (float)*(byte *)(param_3[0x13] + uVar6) * 0.003921569;
          }
          iVar8 = uVar6 * 0x38;
          FUN_00aebeb0(iVar1,*(undefined4 *)(*(int *)(iVar2 + 0x80) + uVar6 * 4),*in_ECX + iVar8,
                       *param_1 + iVar8,fVar4 * param_2,*param_4 + iVar8);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar5);
        return;
      }
    }
    else if (uVar5 != 0) {
      do {
        fVar4 = 1.0;
        uVar6 = (uint)*(ushort *)(*(int *)(iVar1 + 0x18c) + uVar7 * 2);
        if ((*(short *)(*param_3 + uVar6 * 2) != -1) && (param_3[0x14] != 0)) {
          fVar4 = (float)*(byte *)(param_3[0x13] + uVar6) * 0.003921569;
        }
        iVar2 = uVar6 * 0x38;
        FUN_00aebd70(*in_ECX + iVar2,*param_1 + iVar2,fVar4 * param_2,*param_4 + iVar2);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
      return;
    }
  }
  return;
}

