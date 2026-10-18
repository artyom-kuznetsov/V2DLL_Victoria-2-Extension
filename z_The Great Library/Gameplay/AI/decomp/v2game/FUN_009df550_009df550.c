// FUN_009df550 @ 009df550 body=[[009df550, 009df9ff]]


void FUN_009df550(void)

{
  LPMSG lpMsg;
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  HANDLE pvVar4;
  int iVar5;
  DWORD_PTR dwThreadAffinityMask;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *unaff_EDI;
  float10 fVar9;
  uint *lpProcessAffinityMask;
  ULONG_PTR *lpSystemAffinityMask;
  DWORD dwMilliseconds;
  ULONG_PTR local_24;
  uint local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ba38;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  UpdateWindow((HWND)unaff_EDI[0x36]);
  lpSystemAffinityMask = &local_24;
  lpProcessAffinityMask = &local_20;
  pvVar4 = GetCurrentProcess();
  GetProcessAffinityMask(pvVar4,lpProcessAffinityMask,lpSystemAffinityMask);
  iVar8 = 0;
  local_1c = 0.0;
  local_14 = 0.0;
  local_18 = 0.0;
  iVar5 = 2;
  do {
    bVar3 = (byte)iVar5;
    iVar8 = iVar8 + (local_20 >> (bVar3 - 2 & 0x1f) & 1);
    local_18 = (float)((int)local_18 + (local_20 >> (bVar3 - 1 & 0x1f) & 1));
    local_14 = (float)((int)local_14 + (local_20 >> (bVar3 & 0x1f) & 1));
    uVar7 = iVar5 + 2;
    local_1c = (float)((int)local_1c + (local_20 >> (bVar3 + 1 & 0x1f) & 1));
    iVar5 = iVar5 + 4;
  } while (uVar7 < 0x20);
  iVar8 = iVar8 + (int)local_14 + (int)local_18 + (int)local_1c;
  if (1 < iVar8) {
    iVar5 = iVar8 / 2 + 1;
    if (iVar8 < iVar5) {
      iVar5 = iVar8;
    }
    uVar7 = 0;
    do {
      if (((local_20 >> ((byte)uVar7 & 0x1f) & 1) != 0) && (iVar5 = iVar5 + -1, iVar5 == 0)) {
        dwThreadAffinityMask = 1 << ((byte)uVar7 & 0x1f);
        local_20 = dwThreadAffinityMask;
        pvVar4 = GetCurrentThread();
        SetThreadAffinityMask(pvVar4,dwThreadAffinityMask);
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x20);
  }
  (**(code **)(*unaff_EDI + 0x1c))();
  lpMsg = (LPMSG)(unaff_EDI + 0x3d);
  lpMsg->hwnd = (HWND)0x0;
  lpMsg->message = 0;
  unaff_EDI[0x3f] = 0;
  unaff_EDI[0x40] = 0;
  unaff_EDI[0x41] = 0;
  unaff_EDI[0x42] = 0;
  unaff_EDI[0x43] = 0;
  iVar5 = unaff_EDI[0x3e];
  while ((iVar5 != 0x12 && (*(char *)((int)unaff_EDI + 0xf1) == '\0'))) {
    if ((DAT_01258a74 == 0) || (*(char *)(DAT_01258a74 + 0x6bca0) != '\0')) {
      dwMilliseconds = 0;
    }
    else {
      dwMilliseconds = 100;
    }
    Sleep(dwMilliseconds);
    iVar5 = PeekMessageA(lpMsg,(HWND)0x0,0,0,1);
    while (iVar5 != 0) {
      TranslateMessage(lpMsg);
      DispatchMessageA(lpMsg);
      iVar5 = PeekMessageA(lpMsg,(HWND)0x0,0,0,1);
    }
    if (unaff_EDI[0x3e] == 0x12) {
      *(undefined1 *)((int)unaff_EDI + 0xf1) = 1;
    }
    else {
      iVar5 = unaff_EDI[0x3b];
      local_18 = *(float *)(iVar5 + 0x80) * 0.01;
      local_1c = *(float *)(iVar5 + 0x88) * 0.01 * local_18;
      local_18 = *(float *)(iVar5 + 0x84) * 0.01 * local_18;
      if (DAT_00f1f698 != local_18) {
        if (DAT_0131ca9c == (int *)0x0) {
          piVar6 = (int *)FUN_00aae9af(0xc);
          if (piVar6 == (int *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6[1] = 10000;
            *(undefined1 *)((int)piVar6 + 9) = 1;
            *piVar6 = (int)CNullSound::vftable;
          }
          local_8 = 0;
          local_14 = 0.0;
          if ((piVar6 != DAT_0131ca9c) && (DAT_0131ca9c != (int *)0x0)) {
            (**(code **)*DAT_0131ca9c)(1);
          }
          local_8 = 0xffffffff;
          DAT_0131ca9c = piVar6;
        }
        (**(code **)(*DAT_0131ca9c + 0x54))(local_18);
      }
      if (DAT_00f1f694 != local_1c) {
        if (DAT_0131cb34 == (int *)0x0) {
          piVar6 = (int *)FUN_00aae9af(4);
          if (piVar6 == (int *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            DAT_00f20c3c = 3;
            *piVar6 = (int)CNullMusic::vftable;
          }
          local_8 = 1;
          local_14 = 0.0;
          if ((piVar6 != DAT_0131cb34) && (DAT_0131cb34 != (int *)0x0)) {
            (**(code **)*DAT_0131cb34)(1);
          }
          local_8 = 0xffffffff;
          DAT_0131cb34 = piVar6;
        }
        (**(code **)(*DAT_0131cb34 + 0x1c))(local_1c);
      }
      DAT_00f1f694 = local_1c;
      DAT_00f1f698 = local_18;
      if (DAT_0131ca9c == (int *)0x0) {
        piVar6 = (int *)FUN_00aae9af(0xc);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6[1] = 10000;
          *(undefined1 *)((int)piVar6 + 9) = 1;
          *piVar6 = (int)CNullSound::vftable;
        }
        local_8 = 2;
        local_14 = 0.0;
        if ((piVar6 != DAT_0131ca9c) && (DAT_0131ca9c != (int *)0x0)) {
          (**(code **)*DAT_0131ca9c)(1);
        }
        local_8 = 0xffffffff;
        DAT_0131ca9c = piVar6;
      }
      piVar6 = DAT_0131ca9c;
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
        if (DAT_00f20c18 == (undefined4 *)0x0) {
          DAT_00f20c18 = (undefined4 *)0x0;
        }
        else {
          *DAT_00f20c18 = &PTR_FUN_00e38b28;
        }
      }
      fVar9 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
      local_14 = (float)fVar9;
      (**(code **)(*piVar6 + 0x74))(local_14);
      (**(code **)(*(int *)unaff_EDI[0x39] + 0x24))
                ((int)(*(float *)(unaff_EDI[0x3b] + 0x9c) * 0.01 * 4.0 + 1.0));
      if ((int *)unaff_EDI[0x21] != (int *)0x0) {
        (**(code **)(*(int *)unaff_EDI[0x21] + 4))(1);
      }
      if ((char)unaff_EDI[0x22] != '\0') {
        if ((int *)unaff_EDI[0x21] != (int *)0x0) {
          (**(code **)(*(int *)unaff_EDI[0x21] + 0x10))();
        }
        puVar1 = (undefined4 *)unaff_EDI[0x38];
        unaff_EDI[0x38] = 0;
        puVar2 = (undefined4 *)unaff_EDI[0x21];
        if ((puVar1 != puVar2) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        unaff_EDI[0x21] = (int)puVar1;
        *(undefined1 *)(unaff_EDI + 0x22) = 0;
        (**(code **)(*(int *)unaff_EDI[0x21] + 8))(unaff_EDI[0x39],unaff_EDI[0x3a]);
        (**(code **)(*(int *)unaff_EDI[0x21] + 0xc))();
        (**(code **)(*(int *)unaff_EDI[0x21] + 0x14))();
      }
    }
    iVar5 = unaff_EDI[0x3e];
  }
                    /* WARNING: Subroutine does not return */
  _exit(0);
}

