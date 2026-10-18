// __ftelli64_nolock @ 00abc469 body=[[00abc469, 00abc7b2]]


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    __ftelli64_nolock
   
   Library: Visual Studio 2010 Release */

longlong __cdecl __ftelli64_nolock(FILE *_File)

{
  uint _FileHandle;
  char *pcVar1;
  int iVar2;
  BOOL BVar3;
  byte *pbVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int unaff_EDI;
  uint uVar11;
  char *pcVar12;
  bool bVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 local_1018;
  DWORD local_1010;
  byte local_1009 [4097];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  _FileHandle = __fileno(_File);
  if (_File->_cnt < 0) {
    _File->_cnt = 0;
  }
  local_1018 = __lseeki64(_FileHandle,0x100000000,unaff_EDI);
  uVar7 = (uint)((ulonglong)local_1018 >> 0x20);
  pcVar1 = (char *)local_1018;
  if ((uVar7 == 0 || local_1018 < 0) && (local_1018 < 0)) goto LAB_00abc4c6;
  piVar5 = &DAT_013f3ae0 + ((int)_FileHandle >> 5);
  iVar10 = (_FileHandle & 0x1f) * 0x40;
  iVar2 = *piVar5 + iVar10;
  local_1009[0] = (char)(*(char *)(iVar2 + 0x24) * '\x02') >> 1;
  if ((_File->_flag & 0x108U) == 0) {
    uVar7 = (uVar7 - (_File->_cnt >> 0x1f)) - (uint)(pcVar1 < (char *)_File->_cnt);
    goto LAB_00abc7a4;
  }
  pcVar12 = _File->_ptr;
  local_1010 = (int)pcVar12 - (int)_File->_base;
  if ((_File->_flag & 3U) == 0) {
    if ((char)_File->_flag < '\0') goto LAB_00abc674;
    piVar5 = __errno();
    *piVar5 = 0x16;
  }
  else {
    if ((local_1009[0] != 1) || (*(int *)(iVar2 + 0x30) == 0)) {
      if ((*(byte *)(iVar2 + 4) & 0x80) != 0) {
        for (pcVar9 = _File->_base; pcVar9 < pcVar12; pcVar9 = pcVar9 + 1) {
          if (*pcVar9 == '\n') {
            local_1010 = local_1010 + 1;
          }
        }
      }
LAB_00abc674:
      if (local_1018 == 0) {
        uVar7 = 0;
        goto LAB_00abc7a4;
      }
      if ((_File->_flag & 1) != 0) {
        if (_File->_cnt == 0) {
          local_1010 = 0;
        }
        else {
          pcVar12 = pcVar12 + (_File->_cnt - (int)_File->_base);
          if ((*(byte *)(iVar2 + 4) & 0x80) != 0) {
            lVar15 = __lseeki64(_FileHandle,0x200000000,unaff_EDI);
            if (lVar15 == local_1018) {
              pcVar6 = _File->_base;
              pcVar9 = pcVar6 + (int)pcVar12;
              for (; pcVar6 < pcVar9; pcVar6 = pcVar6 + 1) {
                if (*pcVar6 == '\n') {
                  pcVar12 = pcVar12 + 1;
                }
              }
              bVar13 = (_File->_flag & 0x2000U) == 0;
            }
            else {
              lVar15 = __lseeki64(_FileHandle,(ulonglong)uVar7,unaff_EDI);
              if (((int)((ulonglong)lVar15 >> 0x20) == 0 || lVar15 < 0) && (lVar15 < 0))
              goto LAB_00abc4c6;
              if (((char *)0x200 < pcVar12) ||
                 (((_File->_flag & 8U) == 0 ||
                  (pcVar12 = (char *)0x200, (_File->_flag & 0x400U) != 0)))) {
                pcVar12 = (char *)_File->_bufsiz;
              }
              bVar13 = (*(byte *)(*piVar5 + 4 + iVar10) & 4) == 0;
            }
            if (!bVar13) {
              pcVar12 = pcVar12 + 1;
            }
          }
          if (local_1009[0] == 1) {
            pcVar12 = (char *)((uint)pcVar12 >> 1);
          }
          local_1018 = CONCAT44(uVar7 - (pcVar1 < pcVar12),(int)pcVar1 - (int)pcVar12);
        }
      }
      if (local_1009[0] == 1) {
        local_1010 = local_1010 >> 1;
      }
      uVar7 = local_1018._4_4_ + (uint)CARRY4(local_1010,(uint)local_1018);
      goto LAB_00abc7a4;
    }
    uVar11 = local_1010 >> 1;
    if (_File->_cnt == 0) goto LAB_00abc7a4;
    lVar15 = __lseeki64(_FileHandle,(ulonglong)*(uint *)(iVar2 + 0x2c),unaff_EDI);
    iVar8 = (int)((ulonglong)lVar15 >> 0x20);
    iVar2 = *piVar5;
    if ((((uint)lVar15 == *(uint *)(iVar2 + 0x28 + iVar10)) &&
        (iVar8 == *(int *)(iVar2 + 0x2c + iVar10))) &&
       (BVar3 = ReadFile(*(HANDLE *)(iVar2 + iVar10),local_1009 + 1,0x1000,&local_1010,
                         (LPOVERLAPPED)0x0), BVar3 != 0)) {
      lVar14 = __lseeki64(_FileHandle,(ulonglong)uVar7,unaff_EDI);
      if ((((int)((ulonglong)lVar14 >> 0x20) != 0 && -1 < lVar14) || (-1 < lVar14)) &&
         (uVar11 <= local_1010)) {
        pbVar4 = local_1009 + 1;
        if (uVar11 != 0) {
          do {
            uVar11 = uVar11 - 1;
            if (local_1009 + local_1010 + 1 <= pbVar4) break;
            if (*pbVar4 == 0xd) {
              if ((pbVar4 < local_1009 + local_1010) && (pbVar4[1] == 10)) {
                pbVar4 = pbVar4 + 1;
              }
            }
            else {
              pbVar4 = pbVar4 + (char)(&DAT_00ef3048)[*pbVar4];
            }
            pbVar4 = pbVar4 + 1;
          } while (uVar11 != 0);
        }
        uVar7 = iVar8 + (uint)CARRY4((int)pbVar4 - (int)(local_1009 + 1),(uint)lVar15);
        goto LAB_00abc7a4;
      }
    }
  }
LAB_00abc4c6:
  uVar7 = 0xffffffff;
LAB_00abc7a4:
  lVar15 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar7);
  return lVar15;
}

