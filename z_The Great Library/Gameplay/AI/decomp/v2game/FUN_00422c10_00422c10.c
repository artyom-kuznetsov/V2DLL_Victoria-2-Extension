// FUN_00422c10 @ 00422c10 body=[[00422c10, 00422d48] [00422d4c, 00422e85] [00422e89, 00423065] [00423069, 0042307c]]


undefined1 * FUN_00422c10(undefined1 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 ****ppppuVar5;
  undefined4 uVar6;
  int unaff_EBX;
  int *piVar7;
  char *pcVar8;
  undefined4 uStack_5c;
  undefined4 ***pppuStack_58;
  uint uStack_54;
  float fStack_50;
  undefined4 ***pppuStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined1 local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00b47c98;
  pvStack_14 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_c = 0;
  if ((param_2[1] - *param_2) / 0x1c < 2) {
    uVar6 = 0x44;
    pcVar8 = "Please specify arguments: actorname, provinceid, animation, gun, hat";
    ExceptionList = &pvStack_14;
  }
  else {
    ExceptionList = &pvStack_14;
    iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
    iVar3 = FUN_005c2ad0(*param_2);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_005c2ad0(*param_2);
      piVar4 = (int *)(**(code **)(*piVar4 + 0x48))();
      (**(code **)(*(int *)(iVar2 + 0x188) + 0x10))(piVar4);
      uStack_44 = 0xf;
      pppuStack_48 = (undefined4 ****)0x0;
      pppuStack_58 = (undefined4 ***)((uint)pppuStack_58 & 0xffffff00);
      FUN_00408ed0(*param_2 + 0x1c,0,0xffffffff);
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
      ppppuVar5 = (undefined4 ****)pppuStack_58;
      if (uStack_44 < 0x10) {
        ppppuVar5 = &pppuStack_58;
      }
      iVar2 = FUN_00aaf0c5(ppppuVar5);
      if (*(int *)(*(int *)(unaff_EBX + 0x20d8) + iVar2 * 4) != 0) {
        FUN_00644a70(unaff_EBX,piVar4,1);
      }
      puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
      if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(pppuStack_58);
      }
      (**(code **)(*piVar4 + 0x34))();
      cVar1 = FUN_0040b360();
      iVar2 = DAT_012589b8;
      if (cVar1 != '\0') {
        uStack_54 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
        iVar3 = FUN_0052fc10();
        iVar2 = *(int *)(*(int *)(iVar2 + 0x6bd6c) + iVar3 * 4);
        iVar3 = *(int *)(iVar2 + 0x34);
        uStack_54 = *(int *)(iVar2 + 0x38);
        FUN_007e1d60();
        fStack_50 = (float)iVar3;
        pppuStack_48 = pppuStack_58;
        *(ulonglong *)(piVar4 + 0x5c) = CONCAT44(fStack_50,(float)(int)uStack_54);
        *(undefined1 *)(piVar4 + 0x5b) = 1;
        *(ulonglong *)(piVar4 + 0x5e) = CONCAT44(pppuStack_58,uStack_5c);
        uStack_40 = 0xf;
        uStack_44 = 0;
        uStack_54 = (uint)(float)(int)uStack_54 & 0xffffff00;
        FUN_00409350("flagmap",7);
        local_c._0_1_ = 2;
        piVar7 = *(int **)(piVar4[0x3e] + 0x10c);
        uVar6 = FUN_009bcf60();
        *(undefined4 *)(*piVar7 + 8) = uVar6;
        local_c = (uint)local_c._1_3_ << 8;
        if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_54);
        }
      }
      if ((2 < (param_2[1] - *param_2) / 0x1c) &&
         ((**(code **)(*piVar4 + 0x17c))(*param_2 + 0x38), 3 < (param_2[1] - *param_2) / 0x1c)) {
        piVar4 = (int *)FUN_009964f0(DAT_012589b8);
        if (piVar4 == (int *)0x0) {
LAB_00422f08:
          local_38 = 0;
          FUN_004012f0(local_34);
          FUN_0041a520();
          FUN_00a322f0();
          ExceptionList = pvStack_14;
          return param_1;
        }
        FUN_009c0850(piVar4);
        uVar6 = 1;
        piVar7 = piVar4;
        FUN_00989070(piVar4,1);
        FUN_00644b40(piVar7,uVar6);
        (**(code **)(*piVar4 + 0x17c))(*param_2 + 0x38);
        (**(code **)(*piVar4 + 0x34))();
        if (4 < (param_2[1] - *param_2) / 0x1c) {
          piVar4 = (int *)FUN_009964f0(DAT_012589b8);
          if (piVar4 == (int *)0x0) goto LAB_00422f08;
          FUN_009c0850(piVar4);
          uVar6 = 1;
          piVar7 = piVar4;
          FUN_00989070(piVar4,1);
          FUN_00644b40(piVar7,uVar6);
          (**(code **)(*piVar4 + 0x17c))(*param_2 + 0x38);
          (**(code **)(*piVar4 + 0x34))();
        }
      }
      goto LAB_0042302a;
    }
    uVar6 = 0x12;
    pcVar8 = "No such actor type";
  }
  local_38 = 0;
  FUN_00409350(pcVar8,uVar6);
LAB_0042302a:
  *param_1 = local_38;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  FUN_00408ed0(local_34,0,0xffffffff);
  if (local_20 < 0x10) {
    ExceptionList = pvStack_14;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34[0]);
}

