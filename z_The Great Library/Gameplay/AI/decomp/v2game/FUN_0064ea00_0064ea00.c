// FUN_0064ea00 @ 0064ea00 body=[[0064ea00, 0064eaac] [0064eab0, 0064ead5] [0064ead9, 0064eb4e] [0064eb52, 0064ec05] [0064ec09, 0064edad]]


void FUN_0064ea00(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  short *psVar6;
  int *in_ECX;
  uint unaff_EBX;
  short unaff_SI;
  int unaff_EDI;
  int **ppiVar7;
  undefined4 uVar8;
  undefined1 *puStack_7c;
  int *piStack_6c;
  undefined4 local_68;
  int iStack_64;
  undefined1 auStack_60 [8];
  uint uStack_58;
  undefined1 local_50 [8];
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 local_40;
  uint local_3c;
  undefined1 auStack_38 [4];
  undefined1 local_34;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b7f49c;
  pvStack_14 = ExceptionList;
  local_68 = 0;
  puStack_7c = (undefined1 *)0xa;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("messagelog");
  local_c = 0;
  puStack_7c = (undefined1 *)0x11;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = 0;
  FUN_00409350("messagelog_window");
  local_c = CONCAT31(local_c._1_3_,1);
  puStack_7c = local_50;
  piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x7c))(auStack_38);
  piStack_6c = (int *)(**(code **)(*piVar2 + 0x2c))();
  if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_58);
  }
  pvStack_14 = (void *)0xffffffff;
  uStack_44 = 0xf;
  uStack_48 = 0;
  uStack_58 = uStack_58 & 0xffffff00;
  if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c);
  }
  local_3c = local_3c & 0xffffff00;
  piVar2 = (int *)*piStack_6c;
  if (piVar2 != (int *)0x0) {
    while( true ) {
      pvStack_14 = (void *)0xffffffff;
      uStack_28 = 0xf;
      uStack_2c = 0;
      local_3c = local_3c & 0xffffff00;
      FUN_00409350("messagelogbutton",0x10);
      pvStack_14 = (void *)0x2;
      iVar3 = (**(code **)(**(int **)(*piVar2 + 0x20) + 0x34))(&local_3c);
      pvStack_14 = (void *)0xffffffff;
      if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c);
      }
      if (param_1 == iVar3) break;
      piVar2 = (int *)piVar2[2];
      if (piVar2 == (int *)0x0) {
        ExceptionList = pvStack_1c;
        return;
      }
    }
    iVar3 = *piVar2;
    if (iVar3 != 0) {
      piStack_6c = (int *)FUN_00aae9af(0x148);
      pvStack_14 = (void *)0x3;
      if (piStack_6c == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        uStack_28 = 0xf;
        uStack_2c = 0;
        local_3c = local_3c & 0xffffff00;
        FUN_00409350("MessageSettingWindow",0x14);
        pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,4);
        unaff_EBX = 1;
        iVar3 = FUN_006a6320(piStack_6c,in_ECX,&local_3c,
                             *(undefined4 *)(*(int *)(iVar3 + 0x28) + 0x20));
      }
      pvStack_14 = (void *)0xffffffff;
      if ((unaff_EBX & 1) != 0) {
        if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_3c);
        }
        uStack_28 = 0xf;
        uStack_2c = 0;
        local_3c = local_3c & 0xffffff00;
      }
      iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x4c))(auStack_60);
      iVar4 = *(int *)(iVar4 + 4);
      ppiVar7 = &piStack_6c;
      puVar5 = (undefined4 *)(**(code **)(*(int *)in_ECX[0x16] + 0x4c))();
      local_68 = *puVar5;
      iStack_64 = iVar4 + -0x96;
      (**(code **)(**(int **)(iVar3 + 0x30) + 0x60))(&stack0xffffff8c);
      (**(code **)(**(int **)(iVar3 + 0x30) + 0x60))(&puStack_7c);
      (**(code **)(**(int **)(iVar3 + 0x30) + 0x60))(&puStack_7c);
      psVar6 = (short *)(**(code **)(**(int **)(iVar3 + 0x30) + 0x60))(&puStack_7c);
      sVar1 = *psVar6;
      iVar4 = (**(code **)(*in_ECX + 0x40))();
      uVar8 = *(undefined4 *)(iVar4 + 0x6b9bc);
      if (*(int *)(iVar4 + 0x6b9c0) < (int)ppiVar7) {
        iVar4 = (**(code **)(*in_ECX + 0x40))();
        uVar8 = *(undefined4 *)(iVar4 + 0x6b9bc);
        unaff_SI = unaff_SI + ((short)*(undefined4 *)(iVar4 + 0x6b9c0) - (short)ppiVar7);
      }
      iVar4 = (**(code **)(*in_ECX + 0x40))();
      puStack_7c = *(undefined1 **)(iVar4 + 0x6b9c0);
      if (*(int *)(iVar4 + 0x6b9bc) < sVar1 + unaff_EDI) {
        iVar4 = (**(code **)(*in_ECX + 0x40))();
        puStack_7c = *(undefined1 **)(iVar4 + 0x6b9c0);
        unaff_EDI = unaff_EDI + (*(int *)(iVar4 + 0x6b9bc) - (sVar1 + unaff_EDI));
      }
      (**(code **)(**(int **)(iVar3 + 0x30) + 0x18))(CONCAT22(unaff_SI,(short)unaff_EDI));
      for (piVar2 = (int *)in_ECX[0x18]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
        if (*piVar2 == iVar3) {
          ExceptionList = pvStack_1c;
          return;
        }
      }
      iVar4 = in_ECX[0x19];
      piVar2 = (int *)FUN_00aae9af(0x10,uVar8);
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        *piVar2 = iVar3;
        piVar2[1] = iVar4;
        piVar2[2] = 0;
        *(undefined1 *)(piVar2 + 3) = 0;
      }
      iVar3 = in_ECX[0x1a];
      in_ECX[0x19] = (int)piVar2;
      in_ECX[0x1a] = iVar3 + 1;
      if (iVar3 != 0) {
        *(int **)(iVar4 + 8) = piVar2;
        ExceptionList = pvStack_1c;
        return;
      }
      in_ECX[0x18] = (int)piVar2;
    }
  }
  ExceptionList = pvStack_1c;
  return;
}

