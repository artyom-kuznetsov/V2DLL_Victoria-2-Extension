// FUN_009cb4a0 @ 009cb4a0 body=[[009cb4a0, 009cb9c8]]


void FUN_009cb4a0(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  short sVar6;
  short sVar7;
  undefined2 uVar8;
  int in_EAX;
  int iVar9;
  undefined4 *puVar10;
  short *psVar11;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  double dVar12;
  short sStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  sStack_28 = (short)unaff_EBX;
  uStack_26 = (undefined2)((uint)unaff_EBX >> 0x10);
  local_c = *(undefined4 *)(in_EAX + 0x84);
  uVar3 = *(undefined4 *)(in_EAX + 0x80);
  local_18 = 0;
  local_14 = 0;
  *(undefined4 *)(in_EAX + 0x80) = 0;
  *(undefined4 *)(in_EAX + 0x84) = 0;
  sVar6 = (short)param_1;
  sVar7 = (short)((uint)param_1 >> 0x10);
  if (((sVar6 != -1) && (sVar6 != *(short *)(in_EAX + 0x246))) ||
     ((sVar7 != -1 && (sVar7 != *(short *)(in_EAX + 0x248))))) {
    if (sVar6 == -1) {
      sVar6 = *(short *)(in_EAX + 0x246);
    }
    *(short *)(in_EAX + 0x246) = sVar6;
    if (sVar7 == -1) {
      sVar7 = *(short *)(in_EAX + 0x248);
    }
    *(short *)(in_EAX + 0x248) = sVar7;
    if (sVar7 < 0) {
      *(undefined2 *)(in_EAX + 0x248) = 0x28;
    }
    if (sVar6 < 0) {
      *(undefined2 *)(in_EAX + 0x246) = 0x28;
    }
    *(undefined2 *)(in_EAX + 0x220) = *(undefined2 *)(in_EAX + 0x248);
    *(undefined2 *)(in_EAX + 0x222) = *(undefined2 *)(in_EAX + 0x246);
    pcVar4 = *(code **)(**(int **)(in_EAX + 0x1a8) + 0xf4);
    if (*(short *)(in_EAX + 0x244) == 0) {
      local_20 = *(undefined4 *)(in_EAX + 0x84);
      iVar9 = (*pcVar4)(&local_18);
      *(uint *)(in_EAX + 0x90) =
           CONCAT22((short)(int)((float)(int)*(short *)(iVar9 + 2) +
                                (float)CONCAT22(uStack_22,uStack_24)),
                    (short)(int)*(float *)(in_EAX + 0x80));
      dVar12 = (double)(float)CONCAT22(uStack_22,uStack_24) + (double)*(ushort *)(in_EAX + 0x220);
      uStack_24 = SUB82(dVar12,0);
      uStack_22 = (undefined2)((ulonglong)dVar12 >> 0x10);
      local_20 = (undefined4)((ulonglong)dVar12 >> 0x20);
      iVar9 = (**(code **)(**(int **)(in_EAX + 0x1a8) + 0xf4))(&uStack_1c);
      uVar5 = CONCAT22(uStack_26,sStack_28);
      sStack_28 = (short)(int)*(float *)(in_EAX + 0x80);
      uStack_26 = (undefined2)(int)*(float *)(in_EAX + 0x84);
      *(uint *)(in_EAX + 0x94) =
           CONCAT22((short)(int)((double)CONCAT26(uStack_22,CONCAT24(uStack_24,uVar5)) -
                                (double)(int)*(short *)(iVar9 + 2)),sStack_28);
      *(uint *)(in_EAX + 0x98) = CONCAT22(uStack_26,sStack_28);
      if (*(short *)(in_EAX + 0x244) == 0) {
        iVar9 = FUN_009caed0(&local_20,*(undefined4 *)(in_EAX + 0x228));
        uStack_1c = *(undefined4 *)(iVar9 + 4);
      }
      else {
        puVar10 = (undefined4 *)FUN_009caed0(&sStack_28,*(undefined4 *)(in_EAX + 0x228));
        uStack_1c = *puVar10;
      }
      local_20 = *(undefined4 *)(in_EAX + 0x80);
      *(undefined4 *)(in_EAX + 0xa4) = local_20;
      *(undefined4 *)(in_EAX + 0xa8) = uStack_1c;
    }
    else {
      fVar1 = *(float *)(in_EAX + 0x84);
      psVar11 = (short *)(*pcVar4)(&local_18);
      fVar2 = *(float *)(in_EAX + 0x80);
      uVar8 = (undefined2)(int)*(float *)(in_EAX + 0x84);
      *(uint *)(in_EAX + 0x90) =
           CONCAT22((short)(int)fVar1,(short)(int)(fVar2 + (float)(int)*psVar11));
      *(uint *)(in_EAX + 0x94) = CONCAT22(uVar8,(short)(int)fVar2);
      dVar12 = (double)fVar2 + (double)*(ushort *)(in_EAX + 0x222);
      uStack_24 = SUB82(dVar12,0);
      uStack_22 = (undefined2)((ulonglong)dVar12 >> 0x10);
      local_20 = (undefined4)((ulonglong)dVar12 >> 0x20);
      psVar11 = (short *)(**(code **)(**(int **)(in_EAX + 0x1a8) + 0xf4))(&uStack_1c);
      sStack_28 = (short)(int)((double)CONCAT26(uStack_22,
                                                CONCAT24(uStack_24,CONCAT22(uStack_26,sStack_28))) -
                              (double)(int)*psVar11);
      *(uint *)(in_EAX + 0x98) = CONCAT22(uVar8,sStack_28);
      uStack_26 = uVar8;
      if (*(short *)(in_EAX + 0x244) == 0) {
        iVar9 = FUN_009caed0(&local_20,*(undefined4 *)(in_EAX + 0x228));
        local_20 = *(undefined4 *)(iVar9 + 4);
      }
      else {
        puVar10 = (undefined4 *)FUN_009caed0(&sStack_28,*(undefined4 *)(in_EAX + 0x228));
        local_20 = *puVar10;
      }
      uStack_1c = *(undefined4 *)(in_EAX + 0x84);
      *(undefined4 *)(in_EAX + 0xa8) = uStack_1c;
      *(undefined4 *)(in_EAX + 0xa4) = local_20;
      *(undefined4 *)(*(int *)(in_EAX + 0x1a8) + 0x9c) = 0;
      sStack_28 = *(short *)(in_EAX + 0x222) - *(short *)(in_EAX + 0x224);
      uStack_26 = (undefined2)(int)*(float *)(in_EAX + 0x84);
      *(uint *)(*(int *)(in_EAX + 0x154) + 0x9c) = CONCAT22(uStack_26,sStack_28);
    }
    (**(code **)(**(int **)(in_EAX + 0x1a8) + 200))(*(undefined4 *)(in_EAX + 0x98));
    *(undefined4 *)(*(int *)(in_EAX + 0x1a8) + 0x9c) = *(undefined4 *)(in_EAX + 0x98);
    (**(code **)(**(int **)(in_EAX + 0x154) + 200))(*(undefined4 *)(in_EAX + 0x94));
    *(undefined4 *)(*(int *)(in_EAX + 0x154) + 0x9c) = *(undefined4 *)(in_EAX + 0x94);
    pcVar4 = *(code **)(**(int **)(in_EAX + 0x1a8) + 0xf4);
    if (*(short *)(in_EAX + 0x244) == 0) {
      iVar9 = (*pcVar4)(&sStack_28);
      (**(code **)(**(int **)(*(int *)(in_EAX + 0x150) + 0xa0) + 0x100))
                (CONCAT22(*(short *)(in_EAX + 0x220) + *(short *)(iVar9 + 2) * -2,
                          *(undefined2 *)(in_EAX + 0x222)));
      psVar11 = (short *)(**(code **)(**(int **)(in_EAX + 0x1a8) + 0xf4))(&stack0xffffffd0);
      *(short *)(in_EAX + 0x90) =
           *(short *)(in_EAX + 0x90) + (*psVar11 / 2 - (*(ushort *)(in_EAX + 0x222) >> 1));
    }
    else {
      uVar8 = *(undefined2 *)(in_EAX + 0x220);
      psVar11 = (short *)(*pcVar4)(&sStack_28);
      (**(code **)(**(int **)(*(int *)(in_EAX + 0x150) + 0xa0) + 0x100))
                (CONCAT22(uVar8,*(short *)(in_EAX + 0x222) + *psVar11 * -2));
    }
    (**(code **)(**(int **)(in_EAX + 0x150) + 200))(*(undefined4 *)(in_EAX + 0x90));
    *(undefined4 *)(*(int *)(in_EAX + 0x150) + 0x9c) = *(undefined4 *)(in_EAX + 0x90);
    FUN_009ccd10(*(undefined4 *)(in_EAX + 0xa4),*(undefined4 *)(in_EAX + 0xa8));
    *(undefined4 *)(in_EAX + 0x218) = 0;
    *(undefined4 *)(in_EAX + 0x214) = 0;
    *(undefined4 *)(in_EAX + 0x80) = uVar3;
    *(undefined4 *)(in_EAX + 0x84) = unaff_ESI;
    FUN_009cceb0();
  }
  return;
}

