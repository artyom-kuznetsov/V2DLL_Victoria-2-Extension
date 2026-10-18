// FUN_009dd4d0 @ 009dd4d0 body=[[009dd4d0, 009dd75c] [009dd760, 009dd7e3] [009dd7e7, 009dd8cf] [009dd8d3, 009ddba0] [009ddba4, 009ddcb7] [009ddcbb, 009ddce8]]


void FUN_009dd4d0(int param_1,undefined4 param_2,undefined4 param_3,byte *param_4,uint param_5,
                 ushort param_6,int param_7,int param_8,int param_9,int param_10)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *in_ECX;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  undefined4 unaff_EDI;
  bool bVar13;
  undefined4 *puVar14;
  int iVar15;
  byte *pbStack_88;
  byte *pbStack_84;
  uint local_6c;
  int iStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_50 [12];
  void *pvStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_34;
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b6391b;
  pvStack_14 = ExceptionList;
  pcVar2 = *(code **)(*in_ECX + 0x3c);
  ExceptionList = &pvStack_14;
  *(undefined1 *)(in_ECX + 0xc2) = 1;
  pbStack_84 = (byte *)0x9dd50e;
  cVar3 = (*pcVar2)();
  pbStack_84 = (byte *)0xffffffff;
  pbStack_88 = (byte *)0x0;
  in_ECX[0x7d] = param_1;
  if (cVar3 == '\0') {
    FUN_00408ed0(param_2);
    pbStack_84 = (byte *)0xffffffff;
    pbStack_88 = (byte *)0x0;
    FUN_00408ed0(param_3);
    *(char *)((int)in_ECX + 0x309) = (char)param_10;
    *(short *)(in_ECX + 0x6b) = (short)param_5;
    in_ECX[0x84] = param_9;
    *(ushort *)((int)in_ECX + 0x1ae) = param_6;
    pbStack_84 = (byte *)0xffffffff;
    in_ECX[0x6d] = param_8;
    in_ECX[0x6c] = param_7;
    pbStack_88 = (byte *)0x0;
    in_ECX[0x83] = *(int *)(in_ECX[0x54] + 0x94);
    FUN_00408ed0(param_3);
    if (in_ECX[0x68] != 0) {
      pbStack_84 = (byte *)(in_ECX + 0x61);
      pbStack_88 = (byte *)(param_1 + 0x158);
      FUN_009bcce0();
    }
    in_ECX[0x68] = 0;
    pbVar4 = param_4;
    if (0xf < *(uint *)(param_4 + 0x14)) {
      pbVar4 = *(byte **)param_4;
    }
    pbVar10 = &DAT_00ded94d;
    do {
      bVar1 = *pbVar4;
      bVar13 = bVar1 < *pbVar10;
      if (bVar1 != *pbVar10) {
LAB_009dd600:
        iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_009dd605;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar13 = bVar1 < pbVar10[1];
      if (bVar1 != pbVar10[1]) goto LAB_009dd600;
      pbVar4 = pbVar4 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_009dd605:
    pbStack_84 = (byte *)0xffffffff;
    pbStack_88 = (byte *)0x0;
    if (iVar5 != 0) {
      FUN_00408ed0(param_4);
      ExceptionList = pvStack_14;
      return;
    }
    FUN_00408ed0(in_ECX[0x54] + 0x74);
    ExceptionList = pvStack_14;
    return;
  }
  FUN_00408ed0(param_2);
  pbStack_84 = (byte *)0xffffffff;
  pbStack_88 = (byte *)0x0;
  FUN_00408ed0(param_3);
  *(char *)((int)in_ECX + 0x309) = (char)param_10;
  in_ECX[0x84] = param_9;
  pbVar4 = param_4;
  if (0xf < *(uint *)(param_4 + 0x14)) {
    pbVar4 = *(byte **)param_4;
  }
  pbVar10 = &DAT_00ded94d;
  do {
    bVar1 = *pbVar4;
    bVar13 = bVar1 < *pbVar10;
    if (bVar1 != *pbVar10) {
LAB_009dd6b0:
      iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_009dd6b5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar13 = bVar1 < pbVar10[1];
    if (bVar1 != pbVar10[1]) goto LAB_009dd6b0;
    pbVar4 = pbVar4 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_009dd6b5:
  pbVar4 = (byte *)(in_ECX + 0x61);
  if (iVar5 == 0) {
    pbStack_84 = (byte *)0x9dd6d8;
    cVar3 = FUN_00416db0();
    if ((cVar3 == '\0') || (in_ECX[0x68] == 0)) {
      pbStack_84 = (byte *)0x0;
      pbStack_88 = &DAT_00ded94d;
      uStack_20 = 0xf;
      uStack_24 = 0;
      uStack_34 = uStack_34 & 0xffffff00;
      FUN_00409350();
      uStack_c = 0;
      pbStack_84 = (byte *)0x9dd725;
      cVar3 = FUN_00416db0();
      if ((cVar3 != '\0') || (bVar13 = true, in_ECX[0x68] == 0)) {
        bVar13 = false;
      }
      uStack_c = 0xffffffff;
      if (0xf < uStack_20) {
        pbStack_84 = (byte *)uStack_34;
                    /* WARNING: Subroutine does not return */
        pbStack_88 = &UNK_009dd75d;
        FUN_00aae91b();
      }
      if (bVar13) {
        pbStack_88 = (byte *)(param_1 + 0x158);
        pbStack_84 = pbVar4;
        FUN_009bcce0();
      }
      pbStack_84 = (byte *)0xffffffff;
      pbStack_88 = (byte *)0x0;
      FUN_00408ed0(in_ECX[0x54] + 0x74);
      pbStack_84 = (byte *)0x0;
      pbStack_88 = &DAT_00ded94d;
      uStack_20 = 0xf;
      uStack_24 = 0;
      uStack_34 = uStack_34 & 0xffffff00;
      FUN_00409350();
      uStack_c = 1;
      pbStack_84 = (byte *)0x9dd7c4;
      cVar3 = FUN_00416db0();
      uStack_c = 0xffffffff;
      if (0xf < uStack_20) {
        pbStack_84 = (byte *)uStack_34;
                    /* WARNING: Subroutine does not return */
        pbStack_88 = &UNK_009dd7e4;
        FUN_00aae91b();
      }
      if (cVar3 == '\0') {
        pbStack_84 = (byte *)0x1;
        pbStack_88 = pbVar4;
        uVar6 = FUN_009bcbf0();
        if ((uVar6 == 0xffffffff) || (9999 < uVar6)) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(uVar6 * 0x2c + 0x15c + param_1);
        }
        in_ECX[0x68] = iVar5;
        pbStack_88 = (byte *)0x9dd836;
        pbStack_84 = (byte *)(param_1 + 0x158);
        piVar7 = (int *)FUN_009bcf20();
        in_ECX[0x69] = *piVar7;
        iVar5 = piVar7[1];
        goto LAB_009dd952;
      }
    }
  }
  else {
    pbStack_84 = (byte *)0x9dd84e;
    cVar3 = FUN_00416db0();
    if ((cVar3 == '\0') || (in_ECX[0x68] == 0)) {
      pbStack_84 = (byte *)0x0;
      pbStack_88 = &DAT_00ded94d;
      uStack_20 = 0xf;
      uStack_24 = 0;
      uStack_34 = uStack_34 & 0xffffff00;
      FUN_00409350();
      uStack_c = 2;
      pbStack_84 = (byte *)0x9dd898;
      cVar3 = FUN_00416db0();
      if ((cVar3 != '\0') || (bVar13 = true, in_ECX[0x68] == 0)) {
        bVar13 = false;
      }
      uStack_c = 0xffffffff;
      if (0xf < uStack_20) {
        pbStack_84 = (byte *)uStack_34;
                    /* WARNING: Subroutine does not return */
        pbStack_88 = &UNK_009dd8d0;
        FUN_00aae91b();
      }
      if (bVar13) {
        pbStack_88 = (byte *)(param_1 + 0x158);
        pbStack_84 = pbVar4;
        FUN_009bcce0();
      }
      pbStack_84 = (byte *)0xffffffff;
      pbStack_88 = (byte *)0x0;
      FUN_00408ed0(param_4);
      pbStack_84 = (byte *)0x1;
      pbStack_88 = pbVar4;
      uVar6 = FUN_009bcbf0();
      if ((uVar6 == 0xffffffff) || (9999 < uVar6)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(uVar6 * 0x2c + 0x15c + param_1);
      }
      in_ECX[0x68] = iVar5;
      if (uVar6 < 10000) {
        iVar11 = *(int *)(uVar6 * 0x2c + 0x17c + param_1);
        iVar5 = *(int *)(uVar6 * 0x2c + 0x180 + param_1);
      }
      else {
        iVar11 = 0;
        iVar5 = 0;
      }
      in_ECX[0x69] = iVar11;
LAB_009dd952:
      in_ECX[0x6a] = iVar5;
    }
  }
  local_6c = 0;
  if (0xf < (uint)in_ECX[0x66]) {
    pbVar4 = *(byte **)pbVar4;
  }
  pbVar10 = &DAT_00ded94d;
  do {
    bVar1 = *pbVar4;
    bVar13 = bVar1 < *pbVar10;
    if (bVar1 != *pbVar10) {
LAB_009dd987:
      iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_009dd98c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar13 = bVar1 < pbVar10[1];
    if (bVar1 != pbVar10[1]) goto LAB_009dd987;
    pbVar4 = pbVar4 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_009dd98c:
  if (iVar5 == 0) {
    in_ECX[0x69] = (uint)*(ushort *)(in_ECX + 0x6b);
    in_ECX[0x6a] = (uint)*(ushort *)((int)in_ECX + 0x1ae);
  }
  *(ushort *)((int)in_ECX + 0x1ae) = param_6;
  pbStack_84 = (byte *)0xffffffff;
  in_ECX[0x6d] = param_8;
  *(short *)(in_ECX + 0x6b) = (short)param_5;
  in_ECX[0x6c] = param_7;
  pbStack_88 = (byte *)0x0;
  in_ECX[0x83] = *(int *)(in_ECX[0x54] + 0x94);
  FUN_00408ed0(param_3);
  pbStack_84 = (byte *)param_3;
  pbStack_88 = (byte *)0x9dda04;
  piVar7 = (int *)FUN_00973bd0();
  if (piVar7 == (int *)0x0) {
    pbStack_84 = (byte *)param_3;
    pbStack_88 = (byte *)0x9dda18;
    piVar7 = (int *)FUN_00973bd0();
  }
  pbStack_88 = (byte *)in_ECX[0x83];
  uStack_64 = in_ECX[0x6a];
  uStack_60 = 0x40;
  uStack_5c = 0x40;
  iStack_68 = in_ECX[0x69];
  if (1 < (int)pbStack_88) {
    pbStack_84 = (byte *)0x0;
    uVar6 = (int)((float)iStack_68 * 0.25) & 0xffff;
    uVar12 = uStack_64 & 0xffff;
    iVar5 = (**(code **)(*piVar7 + 0x18))
                      (in_ECX[0x7e],&uStack_60,&iStack_68,param_2,in_ECX[0x68],uVar6,uVar12,&param_7
                       ,param_9,1);
    in_ECX[0x7e] = iVar5;
    in_ECX[0x7f] = in_ECX[0x83] * uVar6;
    uVar6 = 1;
    in_ECX[0x80] = uVar12;
    uVar8 = uVar6;
    if (1 < uVar12) {
      do {
        uVar6 = 0;
        if (uVar8 == 0) break;
        uVar6 = uVar8 * 2;
        uVar8 = uVar6;
      } while (uVar6 < uVar12);
    }
    uVar8 = 1;
    uVar12 = uVar8;
    if (1 < (uint)in_ECX[0x7f]) {
      do {
        uVar8 = 0;
        if (uVar12 == 0) break;
        uVar8 = uVar12 * 2;
        uVar12 = uVar8;
      } while (uVar8 < (uint)in_ECX[0x7f]);
    }
    in_ECX[0x81] = uVar8;
    in_ECX[0x82] = uVar6;
    goto LAB_009ddcd0;
  }
  pbStack_84 = (byte *)0xffffffff;
  pbStack_88 = (byte *)0x0;
  uStack_3c = 0xf;
  uStack_40 = 0;
  auStack_50[0] = 0;
  FUN_00408ed0(param_2);
  uStack_c = 3;
  if (((char)param_10 == '\0') || (((short)param_5 != 0 && (param_6 != 0)))) {
LAB_009ddb7c:
    bVar13 = false;
  }
  else {
    pbStack_84 = (byte *)0x9ddb59;
    FUN_009885d0();
    uStack_c = CONCAT31(uStack_c._1_3_,4);
    local_6c = 4;
    pbStack_84 = (byte *)0x9ddb73;
    cVar3 = FUN_00416db0();
    bVar13 = true;
    if (cVar3 != '\0') goto LAB_009ddb7c;
  }
  uStack_c = 3;
  if ((local_6c != 0) && (0xf < uStack_20)) {
    pbStack_84 = (byte *)uStack_34;
                    /* WARNING: Subroutine does not return */
    pbStack_88 = &UNK_009ddba1;
    FUN_00aae91b();
  }
  if (bVar13) {
    if (param_6 == 0) {
      param_6 = (short)uStack_64 - (short)param_8;
    }
    if ((short)param_5 == 0) {
      param_5 = iStack_68 - param_7 & 0xffff;
    }
  }
  if (((char)param_10 != '\0') && (param_6 != 0)) {
    pbStack_84 = (byte *)&param_7;
    pbStack_88 = (byte *)(uint)param_6;
    (**(code **)(*piVar7 + 0x30))(param_2,auStack_50,param_5 & 0xffff);
  }
  pbStack_84 = (byte *)(uint)((char)param_10 == '\0');
  pbStack_88 = (byte *)0x1;
  puVar14 = &param_7;
  uVar6 = (uint)param_6;
  iVar5 = in_ECX[0x68];
  iVar11 = param_9;
  iVar15 = param_10;
  iVar9 = (**(code **)(*piVar7 + 0x18))
                    (in_ECX[0x7e],&uStack_60,&iStack_68,auStack_50,iVar5,param_5 & 0xffff);
  in_ECX[0x7e] = iVar9;
  in_ECX[0x7f] = uVar6;
  in_ECX[0x80] = (int)puVar14;
  in_ECX[0x81] = iVar11;
  in_ECX[0x82] = iVar15;
  if ((char)((uint)iVar5 >> 0x10) != '\0') {
    pbStack_84 = (byte *)(int)(float)in_ECX[0x40];
    pbStack_88 = (byte *)(int)(float)in_ECX[0x3f];
    (**(code **)(*in_ECX + 0xcc))(&pbStack_88);
  }
  uStack_3c = 0xffffffff;
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EDI);
  }
LAB_009ddcd0:
  FUN_009de530();
  ExceptionList = pvStack_44;
  return;
}

