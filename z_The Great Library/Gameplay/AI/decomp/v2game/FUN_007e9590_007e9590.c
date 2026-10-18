// FUN_007e9590 @ 007e9590 body=[[007e9590, 007e97ff]]


undefined4 FUN_007e9590(short *param_1)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  short sVar5;
  int in_ECX;
  uint uVar6;
  int unaff_EBX;
  int *piVar7;
  int unaff_EDI;
  uint uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  int *piStack_5c;
  uint uStack_58;
  int *piStack_54;
  int iStack_50;
  int iStack_4c;
  undefined1 auStack_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  int local_30 [11];
  
  if (*(char *)(in_ECX + 0x178) == '\0') {
    local_38 = *(int *)param_1;
    uVar8 = *(uint *)(in_ECX + 0x210);
    if ((uVar8 == 0xffffffff) || (9999 < uVar8)) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = *(int **)(uVar8 * 0x2c + 0x15c + *(int *)(in_ECX + 0x1a0));
    }
    iStack_4c = in_ECX + 0x1c0;
    iStack_50 = 0x7e95f2;
    local_34 = FUN_009bcfc0();
    if (*(int *)(in_ECX + 0x1ec) < (int)(short)local_38) {
      sVar3 = (short)local_38 - *(short *)(in_ECX + 0x1ec);
    }
    else {
      sVar3 = 0;
    }
    if (*(int *)(in_ECX + 0x1f0) < (int)local_38._2_2_) {
      sVar5 = local_38._2_2_ - *(short *)(in_ECX + 0x1f0);
    }
    else {
      sVar5 = 0;
    }
    local_38 = (int)sVar3;
    if ((local_38 <= *(int *)(in_ECX + 0x1dc)) &&
       (uVar8 = (uint)sVar5, (int)uVar8 <= *(int *)(in_ECX + 0x1dc))) {
      iStack_4c = 0x10;
      iStack_50 = 0;
      piStack_54 = local_30;
      uStack_58 = 0;
      puStack_60 = (undefined1 *)0x7e965d;
      piStack_5c = piVar7;
      (**(code **)(*piVar7 + 0x4c))();
      puStack_60 = auStack_3c;
      uStack_64 = 0;
      (**(code **)(*piVar7 + 0x44))();
      if (unaff_EDI == 0x33545844) {
        uVar4 = uVar8 & 0x80000003;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
        }
        uVar6 = uStack_58 & 0x80000003;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
        }
        uVar6 = uVar6 + uVar4 * 4;
        uVar4 = uVar6 & 0x80000001;
        bVar9 = uVar4 == 0;
        if ((int)uVar4 < 0) {
          bVar9 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
        }
        bVar2 = *(byte *)((int)uVar6 / 2 + unaff_EBX +
                         (((uint)(((int)(((int)uVar8 >> 0x1f & 3U) + uVar8) >> 2) * local_30[0]) >>
                          2) + ((int)(uStack_58 + ((int)uStack_58 >> 0x1f & 3U)) >> 2)) * 0x10);
        if (bVar9) {
          bVar2 = bVar2 & 0xf;
        }
        else {
          bVar2 = bVar2 >> 4;
        }
      }
      else {
        bVar2 = *(byte *)(uVar8 * iStack_50 + unaff_EBX + 3 + uStack_58 * 4);
      }
      if (bVar2 != 0) {
        (**(code **)(*piVar7 + 0x50))(piVar7,0);
        return 0;
      }
      piVar12 = piVar7;
      (**(code **)(*piVar7 + 0x50))();
      piVar1 = piStack_5c;
      iVar11 = 0;
      iVar10 = 0;
      (**(code **)(*piStack_5c + 0x4c))(piStack_5c,0,&uStack_58,0,0x10);
      (**(code **)(*piVar1 + 0x44))(piVar1,0,&uStack_64);
      if (piVar12 == (int *)0x33545844) {
        uVar8 = (uint)param_1[1];
        uVar4 = uVar8 & 0x80000003;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
        }
        uVar6 = (int)*param_1 & 0x80000003;
        if ((int)uVar6 < 0) {
          uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
        }
        uVar6 = uVar6 + uVar4 * 4;
        uVar4 = uVar6 & 0x80000001;
        bVar9 = uVar4 == 0;
        if ((int)uVar4 < 0) {
          bVar9 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
        }
        bVar2 = *(byte *)((int)piVar7 +
                         ((((int)(((int)uVar8 >> 0x1f & 3U) + uVar8) >> 2) * uStack_58 >> 2) +
                         ((int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2)) * 0x10 + (int)uVar6 / 2);
        if (bVar9) {
          bVar2 = bVar2 & 0xf;
        }
        else {
          bVar2 = bVar2 >> 4;
        }
      }
      else {
        bVar2 = *(byte *)((int)piVar7 + *param_1 * 4 + param_1[1] * iVar11 + 3);
      }
      if (bVar2 != 0) {
        (**(code **)(*piVar1 + 0x50))(piVar1,0);
        return 0;
      }
      (**(code **)(*piVar1 + 0x50))();
    }
  }
  return 1;
}

