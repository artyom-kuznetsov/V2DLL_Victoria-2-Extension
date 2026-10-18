// FUN_00ac0620 @ 00ac0620 body=[[00ac0620, 00ac0d52]]


int FUN_00ac0620(undefined4 *param_1,LPCSTR param_2,uint param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  byte bVar2;
  uint *in_EAX;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  int *piVar6;
  DWORD DVar7;
  long lVar8;
  int iVar9;
  HANDLE pvVar10;
  byte bVar11;
  int unaff_EDI;
  bool bVar12;
  longlong lVar13;
  int iVar14;
  _SECURITY_ATTRIBUTES local_34;
  uint local_28;
  HANDLE local_24;
  undefined *local_20;
  DWORD local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  char local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  
  bVar12 = (param_3 & 0x80) == 0;
  local_28 = 0;
  local_6 = 0;
  local_c = 0;
  local_34.nLength = 0xc;
  local_34.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar12) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_34.bInheritHandle = (BOOL)bVar12;
  iVar3 = FUN_00ab4909(&local_28);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (((param_3 & 0x8000) == 0) && (((param_3 & 0x74000) != 0 || (local_28 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar4 = param_3 & 3;
  if (uVar4 == 0) {
    local_10 = 0x80000000;
  }
  else {
    if (uVar4 == 1) {
      if (((param_3 & 8) == 0) || ((param_3 & 0x70000) == 0)) {
        local_10 = 0x40000000;
        goto LAB_00ac06e2;
      }
    }
    else if (uVar4 != 2) goto LAB_00ac06a2;
    local_10 = 0xc0000000;
  }
LAB_00ac06e2:
  if (param_4 == 0x10) {
    local_18 = 0;
  }
  else if (param_4 == 0x20) {
    local_18 = 1;
  }
  else if (param_4 == 0x30) {
    local_18 = 2;
  }
  else if (param_4 == 0x40) {
    local_18 = 3;
  }
  else {
    if (param_4 != 0x80) {
LAB_00ac06a2:
      puVar5 = ___doserrno();
      *puVar5 = 0;
      *in_EAX = 0xffffffff;
      piVar6 = __errno();
      *piVar6 = 0x16;
      FUN_00ab7c17();
      return 0x16;
    }
    local_18 = (uint)(local_10 == 0x80000000);
  }
  uVar4 = param_3 & 0x700;
  if (uVar4 < 0x401) {
    if ((uVar4 == 0x400) || (uVar4 == 0)) {
      local_1c = 3;
    }
    else if (uVar4 == 0x100) {
      local_1c = 4;
    }
    else {
      if (uVar4 == 0x200) goto LAB_00ac07a4;
      if (uVar4 != 0x300) goto LAB_00ac0784;
      local_1c = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_00ac07a4:
        local_1c = 5;
        goto LAB_00ac07b4;
      }
      if (uVar4 != 0x700) {
LAB_00ac0784:
        puVar5 = ___doserrno();
        *puVar5 = 0;
        *in_EAX = 0xffffffff;
        piVar6 = __errno();
        *piVar6 = 0x16;
        FUN_00ab7c17();
        return 0x16;
      }
    }
    local_1c = 1;
  }
LAB_00ac07b4:
  local_14 = 0x80;
  if (((param_3 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_00f1fc3c & param_5))) {
    local_14 = 1;
  }
  if ((param_3 & 0x40) != 0) {
    local_14 = local_14 | 0x4000000;
    local_10 = local_10 | 0x10000;
    local_18 = local_18 | 4;
  }
  if ((param_3 & 0x1000) != 0) {
    local_14 = local_14 | 0x100;
  }
  if ((param_3 & 0x20) == 0) {
    if ((param_3 & 0x10) != 0) {
      local_14 = local_14 | 0x10000000;
    }
  }
  else {
    local_14 = local_14 | 0x8000000;
  }
  uVar4 = __alloc_osfhnd();
  *in_EAX = uVar4;
  if (uVar4 == 0xffffffff) {
    puVar5 = ___doserrno();
    *puVar5 = 0;
    *in_EAX = 0xffffffff;
    piVar6 = __errno();
    *piVar6 = 0x18;
    piVar6 = __errno();
    return *piVar6;
  }
  *param_1 = 1;
  local_24 = CreateFileA(param_2,local_10,local_18,&local_34,local_1c,local_14,(HANDLE)0x0);
  if (local_24 == (HANDLE)0xffffffff) {
    if (((local_10 & 0xc0000000) == 0xc0000000) && ((param_3 & 1) != 0)) {
      local_10 = local_10 & 0x7fffffff;
      local_24 = CreateFileA(param_2,local_10,local_18,&local_34,local_1c,local_14,(HANDLE)0x0);
      if (local_24 != (HANDLE)0xffffffff) goto LAB_00ac08dc;
    }
    pbVar1 = (byte *)((&DAT_013f3ae0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar7 = GetLastError();
    __dosmaperr(DVar7);
    goto LAB_00ac08cd;
  }
LAB_00ac08dc:
  DVar7 = GetFileType(local_24);
  if (DVar7 == 0) {
    pbVar1 = (byte *)((&DAT_013f3ae0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 & 0xfe;
    DVar7 = GetLastError();
    __dosmaperr(DVar7);
    CloseHandle(local_24);
    if (DVar7 == 0) {
      piVar6 = __errno();
      *piVar6 = 0xd;
    }
    goto LAB_00ac08cd;
  }
  if (DVar7 == 2) {
    local_5 = local_5 | 0x40;
  }
  else if (DVar7 == 3) {
    local_5 = local_5 | 8;
  }
  __set_osfhnd(*in_EAX,(intptr_t)local_24);
  bVar11 = local_5 | 1;
  *(byte *)((&DAT_013f3ae0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40) = bVar11;
  pbVar1 = (byte *)((&DAT_013f3ae0)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 & 0x80;
  local_7 = local_5 & 0x48;
  if (local_7 == 0) {
    bVar2 = local_5 & 0x80;
    local_5 = bVar11;
    if (bVar2 == 0) goto LAB_00ac0c42;
    if ((param_3 & 2) == 0) goto LAB_00ac0a10;
    lVar8 = __lseek_nolock(*in_EAX,-1,2);
    if (lVar8 == -1) {
      puVar5 = ___doserrno();
      bVar11 = local_5;
      if (*puVar5 == 0x83) goto LAB_00ac0a10;
    }
    else {
      local_8 = '\0';
      iVar3 = __read_nolock(*in_EAX,&local_8,1);
      if ((((iVar3 != 0) || (local_8 != '\x1a')) ||
          (iVar3 = __chsize_nolock(*in_EAX,CONCAT44(unaff_EDI,lVar8 >> 0x1f)), iVar3 != -1)) &&
         (lVar8 = __lseek_nolock(*in_EAX,0,0), bVar11 = local_5, lVar8 != -1)) goto LAB_00ac0a10;
    }
LAB_00ac09c1:
    __close_nolock(*in_EAX);
    goto LAB_00ac08cd;
  }
LAB_00ac0a10:
  local_5 = bVar11;
  if ((local_5 & 0x80) != 0) {
    if ((param_3 & 0x74000) == 0) {
      if ((local_28 & 0x74000) == 0) {
        param_3 = param_3 | 0x4000;
      }
      else {
        param_3 = param_3 | local_28 & 0x74000;
      }
    }
    uVar4 = param_3 & 0x74000;
    if (uVar4 == 0x4000) {
      local_6 = 0;
    }
    else if ((uVar4 == 0x10000) || (uVar4 == 0x14000)) {
      if ((param_3 & 0x301) == 0x301) goto LAB_00ac0a7f;
    }
    else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_00ac0a7f:
      local_6 = 2;
    }
    else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
      local_6 = 1;
    }
    if (((param_3 & 0x70000) != 0) && (local_20 = (undefined *)0x0, (local_5 & 0x40) == 0)) {
      uVar4 = local_10 & 0xc0000000;
      if (uVar4 == 0x40000000) {
        if (local_1c == 0) goto LAB_00ac0c42;
        if (2 < local_1c) {
          if (local_1c < 5) {
            lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
            if (lVar13 == 0) goto LAB_00ac0ae7;
            lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
            uVar4 = (uint)lVar13 & (uint)((ulonglong)lVar13 >> 0x20);
            goto LAB_00ac0bac;
          }
LAB_00ac0ade:
          if (local_1c != 5) goto LAB_00ac0c42;
        }
LAB_00ac0ae7:
        iVar3 = 0;
        if (local_6 == 1) {
          local_20 = &DAT_00bfbbef;
          iVar14 = 3;
        }
        else {
          if (local_6 != 2) goto LAB_00ac0c42;
          local_20 = (undefined *)0xfeff;
          iVar14 = 2;
        }
        do {
          iVar9 = __write(*in_EAX,(void *)((int)&local_20 + iVar3),iVar14 - iVar3);
          if (iVar9 == -1) goto LAB_00ac09c1;
          iVar3 = iVar3 + iVar9;
        } while (iVar3 < iVar14);
      }
      else {
        if (uVar4 != 0x80000000) {
          if ((uVar4 == 0xc0000000) && (local_1c != 0)) {
            if (2 < local_1c) {
              if (4 < local_1c) goto LAB_00ac0ade;
              lVar13 = __lseeki64_nolock(*in_EAX,0x200000000,unaff_EDI);
              if (lVar13 != 0) {
                lVar13 = __lseeki64_nolock(*in_EAX,0,unaff_EDI);
                if (lVar13 == -1) goto LAB_00ac09c1;
                goto LAB_00ac0b32;
              }
            }
            goto LAB_00ac0ae7;
          }
          goto LAB_00ac0c42;
        }
LAB_00ac0b32:
        iVar3 = __read_nolock(*in_EAX,&local_20,3);
        if (iVar3 == -1) goto LAB_00ac09c1;
        if (iVar3 == 2) {
LAB_00ac0bb9:
          if (((uint)local_20 & 0xffff) == 0xfffe) {
            __close_nolock(*in_EAX);
            piVar6 = __errno();
            *piVar6 = 0x16;
            return 0x16;
          }
          if (((uint)local_20 & 0xffff) == 0xfeff) {
            lVar8 = __lseek_nolock(*in_EAX,2,0);
            if (lVar8 == -1) goto LAB_00ac09c1;
            local_6 = 2;
            goto LAB_00ac0c42;
          }
        }
        else if (iVar3 == 3) {
          if (local_20 == &DAT_00bfbbef) {
            local_6 = 1;
            goto LAB_00ac0c42;
          }
          goto LAB_00ac0bb9;
        }
        uVar4 = __lseek_nolock(*in_EAX,0,0);
LAB_00ac0bac:
        if (uVar4 == 0xffffffff) goto LAB_00ac09c1;
      }
    }
  }
LAB_00ac0c42:
  pbVar1 = (byte *)((&DAT_013f3ae0)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ local_6) & 0x7f;
  pbVar1 = (byte *)((&DAT_013f3ae0)[(int)*in_EAX >> 5] + 0x24 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = (char)(param_3 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if ((local_7 == 0) && ((param_3 & 8) != 0)) {
    pbVar1 = (byte *)((&DAT_013f3ae0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
    *pbVar1 = *pbVar1 | 0x20;
  }
  if ((local_10 & 0xc0000000) != 0xc0000000) {
    return local_c;
  }
  if ((param_3 & 1) == 0) {
    return local_c;
  }
  CloseHandle(local_24);
  pvVar10 = CreateFileA(param_2,local_10 & 0x7fffffff,local_18,&local_34,3,local_14,(HANDLE)0x0);
  if (pvVar10 != (HANDLE)0xffffffff) {
    *(HANDLE *)((*in_EAX & 0x1f) * 0x40 + (&DAT_013f3ae0)[(int)*in_EAX >> 5]) = pvVar10;
    return local_c;
  }
  DVar7 = GetLastError();
  __dosmaperr(DVar7);
  pbVar1 = (byte *)((&DAT_013f3ae0)[(int)*in_EAX >> 5] + 4 + (*in_EAX & 0x1f) * 0x40);
  *pbVar1 = *pbVar1 & 0xfe;
  __free_osfhnd(*in_EAX);
LAB_00ac08cd:
  piVar6 = __errno();
  return *piVar6;
}

