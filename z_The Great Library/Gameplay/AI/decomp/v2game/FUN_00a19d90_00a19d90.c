// FUN_00a19d90 @ 00a19d90 body=[[00a19d90, 00a19e0b] [00a19e10, 00a1a179] [00a1a180, 00a1a721]]


void FUN_00a19d90(int *param_1,uint param_2)

{
  uint *puVar1;
  byte bVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  uint *in_EAX;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  byte *local_8;
  
  piVar6 = param_1;
  local_10 = param_1[1];
  local_8 = (byte *)*param_1;
  local_c = (void *)in_EAX[0xd];
  uVar14 = in_EAX[7];
  if (local_c < (void *)in_EAX[0xc]) {
    local_18 = (int)in_EAX[0xc] + (-1 - (int)local_c);
  }
  else {
    local_18 = in_EAX[0xb] - (int)local_c;
  }
  uVar13 = *in_EAX;
  uVar8 = in_EAX[8];
  uVar7 = in_EAX[8];
  do {
    param_1 = (int *)uVar7;
    if (9 < uVar13) {
      param_2 = 0xfffffffe;
LAB_00a19ddb:
      in_EAX[8] = (uint)param_1;
      in_EAX[7] = uVar14;
      piVar6[1] = local_10;
LAB_00a19dea:
      iVar12 = (int)local_8 - *piVar6;
      *piVar6 = (int)local_8;
LAB_00a19df3:
      piVar6[2] = piVar6[2] + iVar12;
      in_EAX[0xd] = (uint)local_c;
      FUN_00a194e0(piVar6,param_2);
      return;
    }
    switch((&switchD_00a19e13::switchdataD_00a1a724)[uVar13]) {
    case (undefined *)0xa19e1a:
      for (; uVar7 = uVar8, uVar14 < 3; uVar14 = uVar14 + 8) {
        if (local_10 == 0) goto LAB_00a1a4ba;
        local_10 = local_10 - 1;
        bVar11 = *local_8;
        local_8 = local_8 + 1;
        param_1 = (int *)(uVar7 | (uint)bVar11 << ((byte)uVar14 & 0x1f));
        param_2 = 0;
        uVar8 = (uint)param_1;
      }
      in_EAX[6] = uVar7 & 1;
      switch((uVar7 & 7) >> 1) {
      case 0:
        uVar13 = uVar14 - 3 & 7;
        uVar7 = (uVar7 >> 3) >> (sbyte)uVar13;
        uVar14 = (uVar14 - 3) - uVar13;
        *in_EAX = 1;
        param_1 = (int *)uVar7;
        break;
      case 1:
        uVar13 = FUN_00a195e0(9,5,&DAT_00dee470,&DAT_00def470);
        in_EAX[1] = uVar13;
        if (uVar13 == 0) {
          param_2 = 0xfffffffc;
          goto LAB_00a19ddb;
        }
        uVar7 = (uint)param_1 >> 3;
        uVar14 = uVar14 - 3;
        *in_EAX = 6;
        param_1 = (int *)uVar7;
        break;
      case 2:
        uVar7 = uVar7 >> 3;
        uVar14 = uVar14 - 3;
        *in_EAX = 3;
        param_1 = (int *)uVar7;
        break;
      case 3:
        *in_EAX = 9;
        piVar6[6] = (int)"invalid block type";
        in_EAX[8] = (uint)param_1 >> 3;
        in_EAX[7] = uVar14 - 3;
        piVar6[1] = local_10;
        param_2 = 0xfffffffd;
        goto LAB_00a19dea;
      }
      break;
    case (undefined *)0xa19edc:
      for (; uVar14 < 0x20; uVar14 = uVar14 + 8) {
        if (local_10 == 0) goto LAB_00a1a50c;
        local_10 = local_10 - 1;
        bVar11 = *local_8;
        local_8 = local_8 + 1;
        uVar8 = uVar8 | (uint)bVar11 << ((byte)uVar14 & 0x1f);
        param_2 = 0;
        param_1 = (int *)uVar8;
      }
      uVar13 = uVar8 & 0xffff;
      if (~uVar8 >> 0x10 != uVar13) {
        *in_EAX = 9;
        piVar6[6] = (int)"invalid stored block lengths";
        param_2 = 0xfffffffd;
        goto LAB_00a19ddb;
      }
      uVar7 = 0;
      uVar14 = 0;
      in_EAX[1] = uVar13;
      param_1 = (int *)0x0;
      if (uVar13 == 0) {
        *in_EAX = -(uint)(in_EAX[6] != 0) & 7;
      }
      else {
        *in_EAX = 2;
      }
      break;
    case (undefined *)0xa19f59:
      if (local_10 == 0) {
LAB_00a1a50c:
        in_EAX[8] = (uint)param_1;
        goto LAB_00a1a4c0;
      }
      if (local_18 == 0) {
        local_18 = 0;
        if (local_c == (void *)in_EAX[0xb]) {
          pvVar3 = (void *)in_EAX[0xc];
          pvVar4 = (void *)in_EAX[10];
          if (pvVar4 != pvVar3) {
            if (pvVar4 < pvVar3) {
              local_18 = (int)pvVar3 + (-1 - (int)pvVar4);
            }
            else {
              local_18 = (int)in_EAX[0xb] - (int)pvVar4;
            }
            local_c = pvVar4;
            if (local_18 != 0) goto LAB_00a19ff8;
          }
        }
        in_EAX[0xd] = (uint)local_c;
        param_2 = FUN_00a194e0(piVar6,param_2);
        pvVar3 = (void *)in_EAX[0xc];
        local_c = (void *)in_EAX[0xd];
        if (local_c < pvVar3) {
          local_18 = (int)pvVar3 + (-1 - (int)local_c);
        }
        else {
          local_18 = in_EAX[0xb] - (int)local_c;
        }
        if (local_c == (void *)in_EAX[0xb]) {
          pvVar4 = (void *)in_EAX[10];
          if (pvVar4 != pvVar3) {
            local_c = pvVar4;
            if (pvVar4 < pvVar3) {
              local_18 = (int)pvVar3 + (-1 - (int)pvVar4);
            }
            else {
              local_18 = in_EAX[0xb] - (int)pvVar4;
            }
          }
        }
        if (local_18 == 0) {
          in_EAX[8] = uVar7;
          in_EAX[7] = uVar14;
          iVar12 = (int)local_8 - *piVar6;
          *piVar6 = (int)local_8;
          piVar6[1] = local_10;
          goto LAB_00a19df3;
        }
      }
LAB_00a19ff8:
      param_2 = 0;
      local_14 = in_EAX[1];
      if (local_10 < in_EAX[1]) {
        local_14 = local_10;
      }
      if (local_18 < local_14) {
        local_14 = local_18;
      }
      FID_conflict__memcpy(local_c,local_8,local_14);
      local_8 = local_8 + local_14;
      local_10 = local_10 - local_14;
      local_c = (void *)((int)local_c + local_14);
      local_18 = local_18 - local_14;
      puVar1 = in_EAX + 1;
      *puVar1 = *puVar1 - local_14;
      if (*puVar1 == 0) {
        *in_EAX = -(uint)(in_EAX[6] != 0) & 7;
      }
      break;
    case (undefined *)0xa1a058:
      for (; uVar14 < 0xe; uVar14 = uVar14 + 8) {
        if (local_10 == 0) goto LAB_00a1a549;
        local_10 = local_10 - 1;
        bVar11 = *local_8;
        local_8 = local_8 + 1;
        uVar8 = uVar8 | (uint)bVar11 << ((byte)uVar14 & 0x1f);
        param_2 = 0;
        param_1 = (int *)uVar8;
      }
      in_EAX[1] = uVar8 & 0x3fff;
      if ((0x1d < (uVar8 & 0x1f)) || (uVar13 = (uVar8 & 0x3fff) >> 5 & 0x1f, 0x1d < uVar13)) {
        *in_EAX = 9;
        piVar6[6] = (int)"too many length or distance symbols";
        goto switchD_00a19e13_caseD_a1a5a2;
      }
      uVar13 = (*(code *)piVar6[8])(piVar6[10],uVar13 + 0x102 + (uVar8 & 0x1f),4);
      in_EAX[3] = uVar13;
      if (uVar13 != 0) {
        uVar8 = (uint)param_1 >> 0xe;
        uVar14 = uVar14 - 0xe;
        in_EAX[2] = 0;
        *in_EAX = 4;
        param_1 = (int *)uVar8;
        goto switchD_00a19e13_caseD_a1a0f2;
      }
      goto LAB_00a1a57f;
    case (undefined *)0xa1a0f2:
switchD_00a19e13_caseD_a1a0f2:
      if (in_EAX[2] < (in_EAX[1] >> 10) + 4) {
        do {
          for (; uVar14 < 3; uVar14 = uVar14 + 8) {
            if (local_10 == 0) {
LAB_00a1a549:
              in_EAX[8] = (uint)param_1;
              in_EAX[7] = uVar14;
              iVar12 = *piVar6;
              *piVar6 = (int)local_8;
              piVar6[2] = (int)(local_8 + (piVar6[2] - iVar12));
              piVar6[1] = 0;
              in_EAX[0xd] = (uint)local_c;
              FUN_00a194e0(piVar6,param_2);
              return;
            }
            local_10 = local_10 - 1;
            bVar11 = *local_8;
            local_8 = local_8 + 1;
            param_1 = (int *)(uVar8 | (uint)bVar11 << ((byte)uVar14 & 0x1f));
            param_2 = 0;
            uVar8 = (uint)param_1;
          }
          *(uint *)(in_EAX[3] + *(int *)(&DAT_00def570 + in_EAX[2] * 4) * 4) = uVar8 & 7;
          in_EAX[2] = in_EAX[2] + 1;
          param_1 = (int *)((uint)param_1 >> 3);
          uVar14 = uVar14 - 3;
          uVar8 = (uint)param_1;
        } while (in_EAX[2] < (in_EAX[1] >> 10) + 4);
      }
      uVar13 = in_EAX[2];
      while (uVar13 < 0x13) {
        *(undefined4 *)(in_EAX[3] + *(int *)(&DAT_00def570 + in_EAX[2] * 4) * 4) = 0;
        in_EAX[2] = in_EAX[2] + 1;
        uVar13 = in_EAX[2];
      }
      in_EAX[4] = 7;
      local_14 = FUN_00a1abd0(in_EAX[3],in_EAX + 4,in_EAX + 5,in_EAX[9],piVar6);
      if (local_14 == 0) {
        in_EAX[2] = 0;
        *in_EAX = 5;
        local_14 = 0;
        uVar8 = (uint)param_1;
        goto switchD_00a19e13_caseD_a1a1d3;
      }
      if (local_14 == 0xfffffffd) {
        (*(code *)piVar6[9])(piVar6[10],in_EAX[3]);
        *in_EAX = 9;
      }
      in_EAX[8] = (uint)param_1;
      in_EAX[7] = uVar14;
      piVar6[1] = local_10;
      iVar12 = (int)local_8 - *piVar6;
      *piVar6 = (int)local_8;
      param_2 = local_14;
      goto LAB_00a19df3;
    case (undefined *)0xa1a1d3:
switchD_00a19e13_caseD_a1a1d3:
      if (in_EAX[2] < (in_EAX[1] >> 5 & 0x1f) + 0x102 + (in_EAX[1] & 0x1f)) {
        do {
          uVar13 = in_EAX[4];
          if (uVar14 < uVar13) {
            do {
              if (local_10 == 0) goto LAB_00a1a549;
              local_10 = local_10 - 1;
              bVar11 = (byte)uVar14;
              uVar13 = in_EAX[4];
              uVar14 = uVar14 + 8;
              param_2 = 0;
              uVar8 = uVar8 | (uint)*local_8 << (bVar11 & 0x1f);
              local_8 = local_8 + 1;
              param_1 = (int *)uVar8;
            } while (uVar14 < uVar13);
          }
          iVar12 = in_EAX[5] + (*(uint *)(&DAT_00dee400 + uVar13 * 4) & uVar8) * 8;
          bVar11 = *(byte *)(iVar12 + 1);
          local_14 = (uint)bVar11;
          local_24 = *(uint *)(iVar12 + 4);
          if (local_24 < 0x10) {
            param_1 = (int *)(uVar8 >> (bVar11 & 0x1f));
            uVar14 = uVar14 - local_14;
            *(uint *)(in_EAX[3] + in_EAX[2] * 4) = local_24;
            in_EAX[2] = in_EAX[2] + 1;
          }
          else {
            if (local_24 == 0x12) {
              local_1c = 7;
            }
            else {
              local_1c = local_24 - 0xe;
            }
            local_18 = (uint)(local_24 == 0x12) * 8 + 3;
            local_20 = local_14 + local_1c;
            for (; uVar14 < local_20; uVar14 = uVar14 + 8) {
              if (local_10 == 0) goto LAB_00a1a4ba;
              local_10 = local_10 - 1;
              bVar2 = *local_8;
              local_8 = local_8 + 1;
              uVar8 = uVar8 | (uint)bVar2 << ((byte)uVar14 & 0x1f);
              param_2 = 0;
              param_1 = (int *)uVar8;
            }
            uVar8 = uVar8 >> (bVar11 & 0x1f);
            local_18 = local_18 + (*(uint *)(&DAT_00dee400 + local_1c * 4) & uVar8);
            param_1 = (int *)(uVar8 >> ((byte)local_1c & 0x1f));
            uVar14 = uVar14 - (local_1c + local_14);
            uVar13 = in_EAX[2];
            if ((in_EAX[1] >> 5 & 0x1f) + 0x102 + (in_EAX[1] & 0x1f) < local_18 + uVar13) {
LAB_00a1a612:
              (*(code *)piVar6[9])(piVar6[10],in_EAX[3]);
              *in_EAX = 9;
              piVar6[6] = (int)"invalid bit length repeat";
              in_EAX[8] = (uint)param_1;
              in_EAX[7] = uVar14;
              piVar6[1] = local_10;
              piVar6[2] = (int)(local_8 + (piVar6[2] - *piVar6));
              *piVar6 = (int)local_8;
              in_EAX[0xd] = (uint)local_c;
              FUN_00a194e0(piVar6,0xfffffffd);
              return;
            }
            if (local_24 == 0x10) {
              if (uVar13 == 0) goto LAB_00a1a612;
              uVar9 = *(undefined4 *)((in_EAX[3] - 4) + uVar13 * 4);
            }
            else {
              uVar9 = 0;
            }
            do {
              *(undefined4 *)(in_EAX[3] + uVar13 * 4) = uVar9;
              uVar13 = uVar13 + 1;
              local_18 = local_18 - 1;
            } while (local_18 != 0);
            in_EAX[2] = uVar13;
            local_18 = 0;
          }
          uVar8 = (uint)param_1;
        } while (in_EAX[2] < (in_EAX[1] >> 5 & 0x1f) + 0x102 + (in_EAX[1] & 0x1f));
      }
      in_EAX[5] = 0;
      local_1c = 9;
      local_18 = 6;
      local_14 = FUN_00a1ac80((in_EAX[1] & 0x1f) + 0x101,(in_EAX[1] >> 5 & 0x1f) + 1,in_EAX[3],
                              &local_1c,&local_18,&local_28,&local_2c,in_EAX[9],piVar6);
      if (local_14 != 0) {
        if (local_14 == 0xfffffffd) {
          (*(code *)piVar6[9])(piVar6[10],in_EAX[3]);
          *in_EAX = 9;
        }
        in_EAX[8] = (uint)param_1;
        in_EAX[7] = uVar14;
        piVar6[1] = local_10;
        iVar12 = *piVar6;
        *piVar6 = (int)local_8;
        piVar6[2] = (int)(local_8 + (piVar6[2] - iVar12));
        in_EAX[0xd] = (uint)local_c;
        FUN_00a194e0(piVar6,local_14);
        return;
      }
      puVar10 = (undefined4 *)(*(code *)piVar6[8])(piVar6[10],1,0x1c);
      if (puVar10 == (undefined4 *)0x0) {
LAB_00a1a57f:
        in_EAX[8] = (uint)param_1;
        in_EAX[7] = uVar14;
        piVar6[1] = local_10;
        param_2 = 0xfffffffc;
        goto LAB_00a19dea;
      }
      *(undefined1 *)(puVar10 + 4) = (undefined1)local_1c;
      *(undefined1 *)((int)puVar10 + 0x11) = (undefined1)local_18;
      *puVar10 = 0;
      puVar10[5] = local_28;
      puVar10[6] = local_2c;
      in_EAX[1] = (uint)puVar10;
      (*(code *)piVar6[9])(piVar6[10],in_EAX[3]);
      *in_EAX = 6;
switchD_00a19e13_caseD_a1a418:
      in_EAX[8] = (uint)param_1;
      in_EAX[7] = uVar14;
      iVar12 = *piVar6;
      *piVar6 = (int)local_8;
      piVar6[2] = (int)(local_8 + (piVar6[2] - iVar12));
      piVar6[1] = local_10;
      in_EAX[0xd] = (uint)local_c;
      iVar12 = FUN_00a19620(param_2);
      if (iVar12 != 1) {
LAB_00a1a6f5:
        FUN_00a194e0(piVar6,iVar12);
        return;
      }
      param_2 = 0;
      (*(code *)piVar6[9])(piVar6[10],in_EAX[1]);
      local_10 = piVar6[1];
      uVar7 = in_EAX[8];
      local_8 = (byte *)*piVar6;
      uVar14 = in_EAX[7];
      local_c = (void *)in_EAX[0xd];
      if (local_c < (void *)in_EAX[0xc]) {
        local_18 = (int)in_EAX[0xc] + (-1 - (int)local_c);
      }
      else {
        local_18 = in_EAX[0xb] - (int)local_c;
      }
      param_1 = (int *)uVar7;
      if (in_EAX[6] != 0) {
        *in_EAX = 7;
switchD_00a19e13_caseD_a1a6b6:
        in_EAX[0xd] = (uint)local_c;
        iVar12 = FUN_00a194e0(piVar6,param_2);
        local_c = (void *)in_EAX[0xd];
        if ((void *)in_EAX[0xc] != local_c) {
          in_EAX[8] = (uint)param_1;
          in_EAX[7] = uVar14;
          piVar6[1] = local_10;
          iVar5 = *piVar6;
          *piVar6 = (int)local_8;
          piVar6[2] = (int)(local_8 + (piVar6[2] - iVar5));
          in_EAX[0xd] = (uint)local_c;
          goto LAB_00a1a6f5;
        }
        *in_EAX = 8;
switchD_00a19e13_caseD_a1a70c:
        in_EAX[8] = (uint)param_1;
        in_EAX[7] = uVar14;
        piVar6[1] = local_10;
        param_2 = 1;
        goto LAB_00a19dea;
      }
      *in_EAX = 0;
      break;
    case (undefined *)0xa1a418:
      goto switchD_00a19e13_caseD_a1a418;
    case (undefined *)0xa1a5a2:
switchD_00a19e13_caseD_a1a5a2:
      in_EAX[8] = (uint)param_1;
      in_EAX[7] = uVar14;
      iVar12 = *piVar6;
      *piVar6 = (int)local_8;
      piVar6[2] = (int)(local_8 + (piVar6[2] - iVar12));
      piVar6[1] = local_10;
      in_EAX[0xd] = (uint)local_c;
      FUN_00a194e0(piVar6,0xfffffffd);
      return;
    case (undefined *)0xa1a6b6:
      goto switchD_00a19e13_caseD_a1a6b6;
    case (undefined *)0xa1a70c:
      goto switchD_00a19e13_caseD_a1a70c;
    }
    uVar13 = *in_EAX;
    uVar8 = uVar7;
    uVar7 = (uint)param_1;
  } while( true );
LAB_00a1a4ba:
  in_EAX[8] = (uint)param_1;
LAB_00a1a4c0:
  in_EAX[7] = uVar14;
  iVar12 = (int)local_8 - *piVar6;
  *piVar6 = (int)local_8;
  piVar6[1] = 0;
  goto LAB_00a19df3;
}

