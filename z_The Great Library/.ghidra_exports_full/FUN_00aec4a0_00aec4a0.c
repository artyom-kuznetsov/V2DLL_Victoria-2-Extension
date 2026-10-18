// FUN_00aec4a0 @ 00aec4a0 body=[[00aec4a0, 00aec59e]]


void FUN_00aec4a0(int *param_1,float param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  int *in_ECX;
  uint uVar7;
  uint uVar8;
  
  iVar1 = param_3[0x26];
  iVar2 = param_3[0x24];
  iVar3 = *(int *)(iVar2 + 0x1ac);
  uVar4 = *(uint *)(iVar2 + 400);
  uVar8 = 0;
  if (uVar4 != 0) {
    do {
      uVar7 = (uint)*(ushort *)(*(int *)(iVar2 + 0x18c) + uVar8 * 2);
      if (*(short *)(*param_3 + uVar7 * 2) != -1) {
        if (param_3[0x14] == 0) {
          fVar5 = 1.0;
        }
        else {
          fVar5 = (float)*(byte *)(param_3[0x13] + uVar7) * 0.003921569;
        }
        iVar6 = uVar7 * 0x38;
        if (iVar1 == 1) {
          FUN_00aebeb0(iVar2,*(undefined4 *)(*(int *)(iVar3 + 0x80) + uVar7 * 4),*in_ECX + iVar6,
                       *param_1 + iVar6,fVar5 * param_2,*param_4 + iVar6);
        }
        else {
          FUN_00aebd70(*in_ECX + iVar6,*param_1 + iVar6,fVar5 * param_2,*param_4 + iVar6);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar4);
  }
  return;
}

