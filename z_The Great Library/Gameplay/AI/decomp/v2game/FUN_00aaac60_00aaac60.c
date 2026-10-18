// FUN_00aaac60 @ 00aaac60 body=[[00aaac60, 00aaad9f]]


void FUN_00aaac60(undefined4 *param_1,int param_2,char param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  byte *pbVar5;
  undefined4 *puVar6;
  bool bVar7;
  bool bVar8;
  
  puVar3 = *(undefined4 **)(in_ECX + 4);
  bVar7 = true;
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar6 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar6;
      if (param_3 == '\0') {
        pbVar2 = (byte *)puVar3[3];
        pbVar5 = *(byte **)(param_2 + 0xc);
        do {
          bVar1 = *pbVar5;
          bVar7 = bVar1 < *pbVar2;
          if (bVar1 != *pbVar2) {
LAB_00aaacf6:
            iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_00aaacfb;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar7 = bVar1 < pbVar2[1];
          if (bVar1 != pbVar2[1]) goto LAB_00aaacf6;
          pbVar5 = pbVar5 + 2;
          pbVar2 = pbVar2 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00aaacfb:
        bVar7 = iVar4 < 0;
      }
      else {
        pbVar2 = (byte *)puVar3[3];
        pbVar5 = *(byte **)(param_2 + 0xc);
        do {
          bVar1 = *pbVar2;
          bVar7 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00aaacc5:
            bVar7 = -1 < (int)((1 - (uint)bVar7) - (uint)(bVar7 != 0));
            goto LAB_00aaad00;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar7 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00aaacc5;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        bVar7 = true;
      }
LAB_00aaad00:
      if (bVar7 == false) {
        puVar6 = (undefined4 *)puVar3[2];
      }
      else {
        puVar6 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar6 + 0x15) == '\0');
  }
  _param_3 = puVar3;
  if (bVar7 != false) {
    if (puVar3 == (undefined4 *)**(int **)(in_ECX + 4)) {
      bVar7 = true;
      goto LAB_00aaad36;
    }
    FUN_00832110();
  }
  pbVar2 = *(byte **)(param_2 + 0xc);
  pbVar5 = (byte *)_param_3[3];
  do {
    bVar1 = *pbVar5;
    bVar8 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) {
LAB_00aaad83:
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00aaad88;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar8 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) goto LAB_00aaad83;
    pbVar5 = pbVar5 + 2;
    pbVar2 = pbVar2 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00aaad88:
  if (-1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
LAB_00aaad36:
  puVar3 = (undefined4 *)FUN_00aacb90(&param_3,bVar7,puVar3,param_2);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

