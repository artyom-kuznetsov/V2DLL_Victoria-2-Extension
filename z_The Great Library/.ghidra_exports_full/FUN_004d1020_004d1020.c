// FUN_004d1020 @ 004d1020 body=[[004d1020, 004d11a0]]


void FUN_004d1020(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_EAX;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 **ppuVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  
  iVar3 = *(int *)(in_EAX + 0x60);
  do {
    do {
      iVar5 = iVar3;
      if ((iVar5 == 0) || (iVar2 = *param_2, iVar2 == 0)) {
        return;
      }
      iVar3 = *(int *)(iVar5 + 0x224);
      piVar6 = (int *)(iVar5 + 0xf0);
      iVar7 = *(int *)(iVar5 + 0xf4) - *(int *)(iVar5 + 0xf0) >> 4;
      iVar10 = 0;
    } while (iVar7 < 1);
    piVar11 = (int *)(*piVar6 + 8);
    do {
      if (*piVar11 == param_1) {
        iVar10 = iVar10 * 0x10;
        iVar7 = *(int *)(*piVar6 + 0xc + iVar10);
        if (iVar2 <= iVar7) {
          iVar7 = iVar2;
        }
        *param_2 = iVar2 - iVar7;
        piVar11 = (int *)(iVar10 + 0xc + *piVar6);
        *piVar11 = *piVar11 - iVar7;
        piVar11 = (int *)(*(int *)(iVar10 + 8 + *piVar6) + 0x60);
        *piVar11 = *piVar11 - iVar7;
        puVar4 = *(undefined4 **)(iVar10 + 8 + *piVar6);
        if (*(int *)(iVar10 + 0xc + *piVar6) < 1) {
          puVar12 = (undefined4 *)(*(undefined4 **)(iVar5 + 0x130))[1];
          cVar1 = *(char *)((int)puVar12 + 0x15);
          local_18 = *(undefined4 **)(iVar5 + 0x130);
          while (cVar1 == '\0') {
            if ((undefined4 *)puVar12[3] < puVar4) {
              puVar8 = (undefined4 *)puVar12[2];
              puVar12 = local_18;
            }
            else {
              puVar8 = (undefined4 *)*puVar12;
            }
            local_18 = puVar12;
            puVar12 = puVar8;
            cVar1 = *(char *)((int)puVar8 + 0x15);
          }
          if ((local_18 == *(undefined4 **)(iVar5 + 0x130)) || (puVar4 < (undefined4 *)local_18[3]))
          {
            local_14 = *(undefined4 **)(iVar5 + 0x130);
            ppuVar9 = &local_14;
          }
          else {
            ppuVar9 = &local_18;
          }
          puVar4 = *ppuVar9;
          if (puVar4 != *(undefined4 **)(iVar5 + 0x130)) {
            *(int *)(iVar5 + 0x128) = *(int *)(iVar5 + 0x128) - puVar4[4];
            piVar11 = (int *)(*(int *)(iVar5 + 0x13c) +
                             *(int *)(*(int *)(puVar4[3] + 0x68) + 0x28) * 4);
            *piVar11 = *piVar11 - puVar4[4];
            puVar4[4] = 0;
          }
          local_10 = iVar10 + *piVar6;
          local_c = piVar6;
          FUN_004f2760();
        }
        else {
          iVar7 = -iVar7;
          local_18 = puVar4;
          piVar6 = (int *)FUN_004c8d10();
          *piVar6 = *piVar6 + iVar7;
          *(int *)(iVar5 + 0x128) = *(int *)(iVar5 + 0x128) + iVar7;
          piVar6 = (int *)(*(int *)(iVar5 + 0x13c) + *(int *)(puVar4[0x1a] + 0x28) * 4);
          *piVar6 = *piVar6 + iVar7;
        }
        break;
      }
      iVar10 = iVar10 + 1;
      piVar11 = piVar11 + 4;
    } while (iVar10 < iVar7);
  } while( true );
}

