// __read_nolock @ 00abb5a2 body=[[00abb5a2, 00abbb58]]


/* Library Function - Single Match
    __read_nolock
   
   Library: Visual Studio 2010 Release */

int __cdecl __read_nolock(int _FileHandle,void *_DstBuf,uint _MaxCharCount)

{
  uint uVar1;
  byte bVar2;
  short sVar3;
  ulong *puVar4;
  int *piVar5;
  uint uVar6;
  byte *pbVar7;
  BOOL BVar8;
  DWORD DVar9;
  ulong uVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int unaff_EDI;
  bool bVar14;
  longlong lVar15;
  undefined2 uVar16;
  uint local_1c;
  int local_18;
  byte *local_14;
  byte *local_10;
  undefined2 local_c;
  char local_6;
  char local_5;
  
  uVar1 = _MaxCharCount;
  local_18 = -2;
  if (_FileHandle == -2) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    return -1;
  }
  if ((_FileHandle < 0) || (uNumber_013f3ac0 <= (uint)_FileHandle)) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    FUN_00ab7c17();
    return -1;
  }
  piVar5 = &DAT_013f3ae0 + (_FileHandle >> 5);
  iVar13 = (_FileHandle & 0x1fU) * 0x40;
  bVar2 = *(byte *)(*piVar5 + 4 + iVar13);
  if ((bVar2 & 1) == 0) {
    puVar4 = ___doserrno();
    *puVar4 = 0;
    piVar5 = __errno();
    *piVar5 = 9;
    goto LAB_00abb6a1;
  }
  if (_MaxCharCount < 0x80000000) {
    local_10 = (byte *)0x0;
    if ((_MaxCharCount == 0) || ((bVar2 & 2) != 0)) {
      return 0;
    }
    if (_DstBuf != (void *)0x0) {
      local_6 = (char)(*(char *)(*piVar5 + 0x24 + iVar13) * '\x02') >> 1;
      if (local_6 == '\x01') {
        if ((~_MaxCharCount & 1) == 0) goto LAB_00abb68f;
        uVar6 = _MaxCharCount >> 1;
        _MaxCharCount = 4;
        if (3 < uVar6) {
          _MaxCharCount = uVar6;
        }
        pbVar11 = __malloc_crt(_MaxCharCount);
        local_14 = pbVar11;
        if (pbVar11 == (byte *)0x0) {
          piVar5 = __errno();
          *piVar5 = 0xc;
          puVar4 = ___doserrno();
          *puVar4 = 8;
          return -1;
        }
        lVar15 = __lseeki64_nolock(_FileHandle,0x100000000,unaff_EDI);
        iVar12 = *piVar5;
        *(int *)(iVar13 + 0x28 + iVar12) = (int)lVar15;
        *(int *)(iVar13 + 0x2c + iVar12) = (int)((ulonglong)lVar15 >> 0x20);
      }
      else {
        if (local_6 == '\x02') {
          if ((~_MaxCharCount & 1) == 0) goto LAB_00abb68f;
          _MaxCharCount = _MaxCharCount & 0xfffffffe;
        }
        local_14 = _DstBuf;
        pbVar11 = _DstBuf;
      }
      pbVar7 = pbVar11;
      uVar6 = _MaxCharCount;
      if ((((*(byte *)(*piVar5 + iVar13 + 4) & 0x48) != 0) &&
          (bVar2 = *(byte *)(*piVar5 + iVar13 + 5), bVar2 != 10)) && (_MaxCharCount != 0)) {
        uVar6 = _MaxCharCount - 1;
        *pbVar11 = bVar2;
        pbVar7 = pbVar11 + 1;
        local_10 = (byte *)0x1;
        *(undefined1 *)(iVar13 + 5 + *piVar5) = 10;
        if (((local_6 != '\0') && (bVar2 = *(byte *)(iVar13 + 0x25 + *piVar5), bVar2 != 10)) &&
           (uVar6 != 0)) {
          *pbVar7 = bVar2;
          pbVar7 = pbVar11 + 2;
          uVar6 = _MaxCharCount - 2;
          local_10 = (byte *)0x2;
          *(undefined1 *)(iVar13 + 0x25 + *piVar5) = 10;
          if (((local_6 == '\x01') && (bVar2 = *(byte *)(iVar13 + 0x26 + *piVar5), bVar2 != 10)) &&
             (uVar6 != 0)) {
            *pbVar7 = bVar2;
            pbVar7 = pbVar11 + 3;
            local_10 = (byte *)0x3;
            *(undefined1 *)(iVar13 + 0x26 + *piVar5) = 10;
            uVar6 = _MaxCharCount - 3;
          }
        }
      }
      _MaxCharCount = uVar6;
      BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar5),pbVar7,_MaxCharCount,&local_1c,
                       (LPOVERLAPPED)0x0);
      if (((BVar8 == 0) || ((int)local_1c < 0)) || (_MaxCharCount < local_1c)) {
        uVar10 = GetLastError();
        if (uVar10 != 5) {
          if (uVar10 == 0x6d) {
            local_18 = 0;
            goto LAB_00abb9ae;
          }
          goto LAB_00abb9a3;
        }
        piVar5 = __errno();
        *piVar5 = 9;
        puVar4 = ___doserrno();
        *puVar4 = 5;
      }
      else {
        local_10 = (byte *)((int)local_10 + local_1c);
        pbVar7 = (byte *)(iVar13 + 4 + *piVar5);
        if ((*pbVar7 & 0x80) == 0) goto LAB_00abb9ae;
        if (local_6 == '\x02') {
          if ((local_1c == 0) || (*(short *)pbVar11 != 10)) {
            *pbVar7 = *pbVar7 & 0xfb;
          }
          else {
            *pbVar7 = *pbVar7 | 4;
          }
          local_10 = local_14 + (int)local_10;
          _MaxCharCount = (uint)local_14;
          pbVar11 = local_14;
          if (local_14 < local_10) {
            do {
              sVar3 = *(short *)_MaxCharCount;
              if (sVar3 == 0x1a) {
                pbVar7 = (byte *)(iVar13 + 4 + *piVar5);
                if ((*pbVar7 & 0x40) == 0) {
                  *pbVar7 = *pbVar7 | 2;
                }
                else {
                  *(undefined2 *)pbVar11 = *(undefined2 *)_MaxCharCount;
                  pbVar11 = pbVar11 + 2;
                }
                break;
              }
              if (sVar3 == 0xd) {
                if (_MaxCharCount < local_10 + -2) {
                  if (*(short *)(_MaxCharCount + 2) == 10) {
                    uVar1 = _MaxCharCount + 4;
                    goto LAB_00abba4e;
                  }
LAB_00abbae1:
                  _MaxCharCount = _MaxCharCount + 2;
                  uVar16 = 0xd;
LAB_00abbae3:
                  *(undefined2 *)pbVar11 = uVar16;
                }
                else {
                  uVar1 = _MaxCharCount + 2;
                  BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar5),&local_c,2,&local_1c,
                                   (LPOVERLAPPED)0x0);
                  if (((BVar8 == 0) && (DVar9 = GetLastError(), DVar9 != 0)) || (local_1c == 0))
                  goto LAB_00abbae1;
                  if ((*(byte *)(iVar13 + 4 + *piVar5) & 0x48) == 0) {
                    if ((pbVar11 == local_14) && (local_c == 10)) goto LAB_00abba4e;
                    __lseeki64_nolock(_FileHandle,0x1ffffffff,unaff_EDI);
                    if (local_c == 10) goto LAB_00abbaea;
                    goto LAB_00abbae1;
                  }
                  if (local_c == 10) {
LAB_00abba4e:
                    _MaxCharCount = uVar1;
                    uVar16 = 10;
                    goto LAB_00abbae3;
                  }
                  pbVar11[0] = 0xd;
                  pbVar11[1] = 0;
                  *(undefined1 *)(iVar13 + 5 + *piVar5) = (undefined1)local_c;
                  *(undefined1 *)(iVar13 + 0x25 + *piVar5) = local_c._1_1_;
                  *(undefined1 *)(iVar13 + 0x26 + *piVar5) = 10;
                  _MaxCharCount = uVar1;
                }
                pbVar11 = pbVar11 + 2;
                uVar1 = _MaxCharCount;
              }
              else {
                *(short *)pbVar11 = sVar3;
                pbVar11 = pbVar11 + 2;
                uVar1 = _MaxCharCount + 2;
              }
LAB_00abbaea:
              _MaxCharCount = uVar1;
            } while (_MaxCharCount < local_10);
          }
          local_10 = (byte *)((int)pbVar11 - (int)local_14);
          goto LAB_00abb9ae;
        }
        if ((local_1c == 0) || (*pbVar11 != 10)) {
          *pbVar7 = *pbVar7 & 0xfb;
        }
        else {
          *pbVar7 = *pbVar7 | 4;
        }
        local_10 = local_14 + (int)local_10;
        _MaxCharCount = (uint)local_14;
        pbVar11 = local_14;
        if (local_14 < local_10) {
          do {
            bVar2 = *(byte *)_MaxCharCount;
            if (bVar2 == 0x1a) {
              pbVar7 = (byte *)(iVar13 + 4 + *piVar5);
              if ((*pbVar7 & 0x40) == 0) {
                *pbVar7 = *pbVar7 | 2;
              }
              else {
                *pbVar11 = *(byte *)_MaxCharCount;
                pbVar11 = pbVar11 + 1;
              }
              break;
            }
            if (bVar2 == 0xd) {
              if (_MaxCharCount < local_10 + -1) {
                if (*(char *)(_MaxCharCount + 1) == '\n') {
                  uVar6 = _MaxCharCount + 2;
                  goto LAB_00abb82e;
                }
LAB_00abb8a5:
                _MaxCharCount = _MaxCharCount + 1;
                *pbVar11 = 0xd;
              }
              else {
                uVar6 = _MaxCharCount + 1;
                BVar8 = ReadFile(*(HANDLE *)(iVar13 + *piVar5),&local_5,1,&local_1c,
                                 (LPOVERLAPPED)0x0);
                if (((BVar8 == 0) && (DVar9 = GetLastError(), DVar9 != 0)) || (local_1c == 0))
                goto LAB_00abb8a5;
                if ((*(byte *)(iVar13 + 4 + *piVar5) & 0x48) == 0) {
                  if ((pbVar11 == local_14) && (local_5 == '\n')) goto LAB_00abb82e;
                  __lseeki64_nolock(_FileHandle,0x1ffffffff,unaff_EDI);
                  if (local_5 == '\n') goto LAB_00abb8a9;
                  goto LAB_00abb8a5;
                }
                if (local_5 == '\n') {
LAB_00abb82e:
                  _MaxCharCount = uVar6;
                  *pbVar11 = 10;
                }
                else {
                  *pbVar11 = 0xd;
                  *(char *)(iVar13 + 5 + *piVar5) = local_5;
                  _MaxCharCount = uVar6;
                }
              }
              pbVar11 = pbVar11 + 1;
              uVar6 = _MaxCharCount;
            }
            else {
              *pbVar11 = bVar2;
              pbVar11 = pbVar11 + 1;
              uVar6 = _MaxCharCount + 1;
            }
LAB_00abb8a9:
            _MaxCharCount = uVar6;
          } while (_MaxCharCount < local_10);
        }
        local_10 = (byte *)((int)pbVar11 - (int)local_14);
        if ((local_6 != '\x01') || (local_10 == (byte *)0x0)) goto LAB_00abb9ae;
        bVar2 = pbVar11[-1];
        if ((char)bVar2 < '\0') {
          iVar12 = 1;
          pbVar11 = pbVar11 + -1;
          while ((((&DAT_00ef3048)[bVar2] == '\0' && (iVar12 < 5)) && (local_14 <= pbVar11))) {
            pbVar11 = pbVar11 + -1;
            bVar2 = *pbVar11;
            iVar12 = iVar12 + 1;
          }
          if ((char)(&DAT_00ef3048)[*pbVar11] == 0) {
            piVar5 = __errno();
            *piVar5 = 0x2a;
            goto LAB_00abb9aa;
          }
          if ((char)(&DAT_00ef3048)[*pbVar11] + 1 == iVar12) {
            pbVar11 = pbVar11 + iVar12;
          }
          else if ((*(byte *)(*piVar5 + 4 + iVar13) & 0x48) == 0) {
            __lseeki64_nolock(_FileHandle,CONCAT44(1,-iVar12 >> 0x1f),unaff_EDI);
          }
          else {
            pbVar7 = pbVar11 + 1;
            *(byte *)(*piVar5 + 5 + iVar13) = *pbVar11;
            if (1 < iVar12) {
              *(byte *)(iVar13 + 0x25 + *piVar5) = *pbVar7;
              pbVar7 = pbVar11 + 2;
            }
            if (iVar12 == 3) {
              *(byte *)(iVar13 + 0x26 + *piVar5) = *pbVar7;
              pbVar7 = pbVar7 + 1;
            }
            pbVar11 = pbVar7 + -iVar12;
          }
        }
        iVar12 = (int)pbVar11 - (int)local_14;
        local_10 = (byte *)MultiByteToWideChar(0xfde9,0,(LPCSTR)local_14,iVar12,_DstBuf,uVar1 >> 1);
        if (local_10 != (byte *)0x0) {
          bVar14 = local_10 != (byte *)iVar12;
          local_10 = (byte *)((int)local_10 * 2);
          *(uint *)(iVar13 + 0x30 + *piVar5) = (uint)bVar14;
          goto LAB_00abb9ae;
        }
        uVar10 = GetLastError();
LAB_00abb9a3:
        __dosmaperr(uVar10);
      }
LAB_00abb9aa:
      local_18 = -1;
LAB_00abb9ae:
      if (local_14 != _DstBuf) {
        _free(local_14);
      }
      if (local_18 == -2) {
        return (int)local_10;
      }
      return local_18;
    }
  }
LAB_00abb68f:
  puVar4 = ___doserrno();
  *puVar4 = 0;
  piVar5 = __errno();
  *piVar5 = 0x16;
LAB_00abb6a1:
  FUN_00ab7c17();
  return -1;
}

