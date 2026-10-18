// FUN_00a19620 @ 00a19620 body=[[00a19620, 00a19819] [00a19820, 00a19c3f]]


void FUN_00a19620(void)

{
  byte bVar1;
  int *piVar2;
  undefined1 *puVar3;
  int in_EAX;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  int *unaff_EDI;
  undefined1 *local_20;
  byte *local_1c;
  undefined1 *local_18;
  uint local_14;
  byte *local_10;
  uint local_8;
  
  local_14 = unaff_EDI[1];
  local_10 = (byte *)*unaff_EDI;
  piVar2 = *(int **)(in_EAX + 4);
  uVar8 = *(uint *)(in_EAX + 0x1c);
  local_8 = *(uint *)(in_EAX + 0x20);
  puVar7 = *(undefined1 **)(in_EAX + 0x34);
  if (puVar7 < *(undefined1 **)(in_EAX + 0x30)) {
    local_18 = *(undefined1 **)(in_EAX + 0x30) + (-1 - (int)puVar7);
  }
  else {
    local_18 = (undefined1 *)(*(int *)(in_EAX + 0x2c) - (int)puVar7);
  }
  iVar4 = *piVar2;
  do {
    switch(iVar4) {
    case 0:
      if ((local_18 < (undefined1 *)0x102) || (local_14 < 10)) {
LAB_00a1970a:
        piVar2[3] = (uint)*(byte *)(piVar2 + 4);
        piVar2[2] = piVar2[5];
        *piVar2 = 1;
        goto switchD_00a19666_caseD_1;
      }
      *(uint *)(in_EAX + 0x20) = local_8;
      *(uint *)(in_EAX + 0x1c) = uVar8;
      unaff_EDI[1] = local_14;
      iVar4 = *unaff_EDI;
      *unaff_EDI = (int)local_10;
      unaff_EDI[2] = (int)(local_10 + (unaff_EDI[2] - iVar4));
      *(undefined1 **)(in_EAX + 0x34) = puVar7;
      iVar4 = FUN_00a1ae10((char)piVar2[4],*(undefined1 *)((int)piVar2 + 0x11),piVar2[5],piVar2[6]);
      local_10 = (byte *)*unaff_EDI;
      local_14 = unaff_EDI[1];
      uVar8 = *(uint *)(in_EAX + 0x1c);
      local_8 = *(uint *)(in_EAX + 0x20);
      puVar7 = *(undefined1 **)(in_EAX + 0x34);
      if (puVar7 < *(undefined1 **)(in_EAX + 0x30)) {
        local_18 = *(undefined1 **)(in_EAX + 0x30) + (-1 - (int)puVar7);
      }
      else {
        local_18 = (undefined1 *)(*(int *)(in_EAX + 0x2c) - (int)puVar7);
      }
      if (iVar4 == 0) goto LAB_00a1970a;
      *piVar2 = (uint)(iVar4 != 1) * 2 + 7;
      goto LAB_00a19b21;
    case 1:
switchD_00a19666_caseD_1:
      for (; uVar8 < (uint)piVar2[3]; uVar8 = uVar8 + 8) {
        if (local_14 == 0) goto LAB_00a19b5e;
        local_14 = local_14 - 1;
        bVar1 = *local_10;
        local_10 = local_10 + 1;
        local_8 = local_8 | (uint)bVar1 << ((byte)uVar8 & 0x1f);
      }
      local_1c = (byte *)(piVar2[2] + (*(uint *)(&DAT_00dee400 + piVar2[3] * 4) & local_8) * 8);
      local_8 = local_8 >> (local_1c[1] & 0x1f);
      uVar8 = uVar8 - local_1c[1];
      bVar1 = *local_1c;
      uVar5 = (uint)bVar1;
      if (uVar5 == 0) {
        piVar2[2] = *(int *)(local_1c + 4);
        *piVar2 = 6;
        goto LAB_00a19b21;
      }
      if ((bVar1 & 0x10) != 0) {
        piVar2[2] = uVar5 & 0xf;
        piVar2[1] = *(int *)(local_1c + 4);
        *piVar2 = 2;
        goto LAB_00a19b21;
      }
      if ((bVar1 & 0x40) != 0) {
        if ((bVar1 & 0x20) != 0) {
          *piVar2 = 7;
          goto LAB_00a19b21;
        }
        *piVar2 = 9;
        unaff_EDI[6] = (int)"invalid literal/length code";
        goto LAB_00a19b9d;
      }
      goto LAB_00a197d0;
    case 2:
      uVar5 = piVar2[2];
      for (; uVar8 < uVar5; uVar8 = uVar8 + 8) {
        if (local_14 == 0) goto LAB_00a19b5e;
        local_14 = local_14 - 1;
        bVar1 = *local_10;
        local_10 = local_10 + 1;
        local_8 = local_8 | (uint)bVar1 << ((byte)uVar8 & 0x1f);
      }
      piVar2[1] = piVar2[1] + (*(uint *)(&DAT_00dee400 + uVar5 * 4) & local_8);
      local_8 = local_8 >> ((byte)uVar5 & 0x1f);
      uVar8 = uVar8 - uVar5;
      piVar2[3] = (uint)*(byte *)((int)piVar2 + 0x11);
      piVar2[2] = piVar2[6];
      *piVar2 = 3;
      break;
    case 3:
      break;
    case 4:
      uVar5 = piVar2[2];
      for (; uVar8 < uVar5; uVar8 = uVar8 + 8) {
        if (local_14 == 0) goto LAB_00a19b5e;
        local_14 = local_14 - 1;
        bVar1 = *local_10;
        local_10 = local_10 + 1;
        local_8 = local_8 | (uint)bVar1 << ((byte)uVar8 & 0x1f);
      }
      piVar2[3] = piVar2[3] + (*(uint *)(&DAT_00dee400 + uVar5 * 4) & local_8);
      local_8 = local_8 >> ((byte)uVar5 & 0x1f);
      uVar8 = uVar8 - uVar5;
      *piVar2 = 5;
    case 5:
      local_20 = puVar7 + -piVar2[3];
      if (local_20 < *(undefined1 **)(in_EAX + 0x28)) {
        do {
          local_20 = local_20 + (*(int *)(in_EAX + 0x2c) - (int)*(undefined1 **)(in_EAX + 0x28));
        } while (local_20 < *(undefined1 **)(in_EAX + 0x28));
      }
      iVar4 = piVar2[1];
      while (iVar4 != 0) {
        puVar6 = puVar7;
        if (local_18 == (undefined1 *)0x0) {
          if (puVar7 == *(undefined1 **)(in_EAX + 0x2c)) {
            local_18 = *(undefined1 **)(in_EAX + 0x30);
            puVar6 = *(undefined1 **)(in_EAX + 0x28);
            if (local_18 != puVar6) {
              if (puVar6 < local_18) {
                local_18 = local_18 + (-1 - (int)puVar6);
              }
              else {
                local_18 = (undefined1 *)(*(int *)(in_EAX + 0x2c) - (int)puVar6);
              }
              puVar7 = puVar6;
              if (local_18 != (undefined1 *)0x0) goto LAB_00a19a4d;
            }
          }
          *(undefined1 **)(in_EAX + 0x34) = puVar7;
          FUN_00a194e0();
          puVar6 = *(undefined1 **)(in_EAX + 0x34);
          if (puVar6 < *(undefined1 **)(in_EAX + 0x30)) {
            local_18 = *(undefined1 **)(in_EAX + 0x30) + (-1 - (int)puVar6);
          }
          else {
            local_18 = (undefined1 *)(*(int *)(in_EAX + 0x2c) - (int)puVar6);
          }
          if (puVar6 == *(undefined1 **)(in_EAX + 0x2c)) {
            puVar7 = *(undefined1 **)(in_EAX + 0x28);
            puVar3 = *(undefined1 **)(in_EAX + 0x30);
            if (puVar3 != puVar7) {
              puVar6 = puVar7;
              if (puVar7 < puVar3) {
                local_18 = puVar3 + (-1 - (int)puVar7);
              }
              else {
                local_18 = (undefined1 *)(*(int *)(in_EAX + 0x2c) - (int)puVar7);
              }
            }
          }
          if (local_18 == (undefined1 *)0x0) goto LAB_00a19bb0;
        }
LAB_00a19a4d:
        *puVar6 = *local_20;
        local_20 = local_20 + 1;
        local_18 = local_18 + -1;
        puVar7 = puVar6 + 1;
        if (local_20 == *(undefined1 **)(in_EAX + 0x2c)) {
          local_20 = *(undefined1 **)(in_EAX + 0x28);
        }
        piVar2[1] = piVar2[1] + -1;
        iVar4 = piVar2[1];
      }
LAB_00a19b1b:
      *piVar2 = 0;
      goto LAB_00a19b21;
    case 6:
      puVar6 = puVar7;
      if (local_18 == (undefined1 *)0x0) {
        if (puVar7 == *(undefined1 **)(in_EAX + 0x2c)) {
          local_18 = *(undefined1 **)(in_EAX + 0x30);
          puVar6 = *(undefined1 **)(in_EAX + 0x28);
          if (local_18 != puVar6) {
            if (puVar6 < local_18) {
              local_18 = local_18 + (-1 - (int)puVar6);
            }
            else {
              local_18 = (undefined1 *)(*(int *)(in_EAX + 0x2c) - (int)puVar6);
            }
            puVar7 = puVar6;
            if (local_18 != (undefined1 *)0x0) goto LAB_00a19b04;
          }
        }
        *(undefined1 **)(in_EAX + 0x34) = puVar7;
        FUN_00a194e0();
        puVar6 = *(undefined1 **)(in_EAX + 0x34);
        if (puVar6 < *(undefined1 **)(in_EAX + 0x30)) {
          local_18 = *(undefined1 **)(in_EAX + 0x30) + (-1 - (int)puVar6);
        }
        else {
          local_18 = (undefined1 *)(*(int *)(in_EAX + 0x2c) - (int)puVar6);
        }
        if (puVar6 == *(undefined1 **)(in_EAX + 0x2c)) {
          puVar7 = *(undefined1 **)(in_EAX + 0x28);
          puVar3 = *(undefined1 **)(in_EAX + 0x30);
          if (puVar3 != puVar7) {
            puVar6 = puVar7;
            if (puVar7 < puVar3) {
              local_18 = puVar3 + (-1 - (int)puVar7);
            }
            else {
              local_18 = (undefined1 *)(*(int *)(in_EAX + 0x2c) - (int)puVar7);
            }
          }
        }
        if (local_18 == (undefined1 *)0x0) {
LAB_00a19bb0:
          *(uint *)(in_EAX + 0x20) = local_8;
          *(uint *)(in_EAX + 0x1c) = uVar8;
          unaff_EDI[1] = local_14;
          puVar7 = puVar6;
          goto LAB_00a19b6e;
        }
      }
LAB_00a19b04:
      *puVar6 = (char)piVar2[2];
      puVar7 = puVar6 + 1;
      local_18 = local_18 + -1;
      goto LAB_00a19b1b;
    case 7:
      if (7 < uVar8) {
        local_14 = local_14 + 1;
        uVar8 = uVar8 - 8;
        local_10 = local_10 + -1;
      }
      *(undefined1 **)(in_EAX + 0x34) = puVar7;
      FUN_00a194e0();
      puVar7 = *(undefined1 **)(in_EAX + 0x34);
      if (*(undefined1 **)(in_EAX + 0x30) != puVar7) {
        *(uint *)(in_EAX + 0x20) = local_8;
        *(uint *)(in_EAX + 0x1c) = uVar8;
        unaff_EDI[1] = local_14;
        unaff_EDI[2] = (int)(local_10 + (unaff_EDI[2] - *unaff_EDI));
        *unaff_EDI = (int)local_10;
        *(undefined1 **)(in_EAX + 0x34) = puVar7;
        FUN_00a194e0();
        return;
      }
      *piVar2 = 8;
    case 8:
      *(uint *)(in_EAX + 0x20) = local_8;
      *(uint *)(in_EAX + 0x1c) = uVar8;
      unaff_EDI[1] = local_14;
LAB_00a19b40:
      iVar4 = *unaff_EDI;
      *unaff_EDI = (int)local_10;
      unaff_EDI[2] = (int)(local_10 + (unaff_EDI[2] - iVar4));
      *(undefined1 **)(in_EAX + 0x34) = puVar7;
      FUN_00a194e0();
      return;
    case 9:
    default:
      *(uint *)(in_EAX + 0x20) = local_8;
      *(uint *)(in_EAX + 0x1c) = uVar8;
      unaff_EDI[1] = local_14;
      goto LAB_00a19b40;
    }
    for (; uVar8 < (uint)piVar2[3]; uVar8 = uVar8 + 8) {
      if (local_14 == 0) goto LAB_00a19b5e;
      local_14 = local_14 - 1;
      bVar1 = *local_10;
      local_10 = local_10 + 1;
      local_8 = local_8 | (uint)bVar1 << ((byte)uVar8 & 0x1f);
    }
    local_1c = (byte *)(piVar2[2] + (*(uint *)(&DAT_00dee400 + piVar2[3] * 4) & local_8) * 8);
    local_8 = local_8 >> (local_1c[1] & 0x1f);
    bVar1 = *local_1c;
    uVar5 = (uint)bVar1;
    uVar8 = uVar8 - local_1c[1];
    if ((bVar1 & 0x10) == 0) {
      if ((bVar1 & 0x40) != 0) {
        *piVar2 = 9;
        unaff_EDI[6] = (int)"invalid distance code";
LAB_00a19b9d:
        *(uint *)(in_EAX + 0x20) = local_8;
        *(uint *)(in_EAX + 0x1c) = uVar8;
        unaff_EDI[1] = local_14;
        goto LAB_00a19b40;
      }
LAB_00a197d0:
      piVar2[3] = uVar5;
      piVar2[2] = (int)(local_1c + *(int *)(local_1c + 4) * 8);
    }
    else {
      piVar2[2] = uVar5 & 0xf;
      piVar2[3] = *(int *)(local_1c + 4);
      *piVar2 = 4;
    }
LAB_00a19b21:
    iVar4 = *piVar2;
  } while( true );
LAB_00a19b5e:
  *(uint *)(in_EAX + 0x20) = local_8;
  *(uint *)(in_EAX + 0x1c) = uVar8;
  unaff_EDI[1] = 0;
LAB_00a19b6e:
  iVar4 = *unaff_EDI;
  *unaff_EDI = (int)local_10;
  unaff_EDI[2] = (int)(local_10 + (unaff_EDI[2] - iVar4));
  *(undefined1 **)(in_EAX + 0x34) = puVar7;
  FUN_00a194e0();
  return;
}

