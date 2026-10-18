// __fstat64i32 @ 00ab429c body=[[00ab429c, 00ab45e3]]


/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __fstat64i32
   
   Library: Visual Studio 2010 Release */

void __fstat64i32(uint param_1,uint *param_2)

{
  ushort uVar1;
  ulong *puVar2;
  int *piVar3;
  DWORD DVar4;
  uint uVar5;
  BOOL BVar6;
  undefined2 uVar7;
  int iVar8;
  __time64_t _Var9;
  _FILETIME local_78;
  uint local_70;
  int *local_6c;
  undefined4 local_68;
  _BY_HANDLE_FILE_INFORMATION local_64;
  _SYSTEMTIME local_30 [2];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_00e6c030;
  uStack_c = 0xab42a8;
  local_70 = param_1;
  local_68 = 0;
  if (param_2 == (uint *)0x0) {
    puVar2 = ___doserrno();
    *puVar2 = 0;
    piVar3 = __errno();
    *piVar3 = 0x16;
  }
  else {
    _memset(param_2,0,0x30);
    if (param_1 == 0xfffffffe) {
      puVar2 = ___doserrno();
      *puVar2 = 0;
      piVar3 = __errno();
      *piVar3 = 9;
      goto LAB_00ab437c;
    }
    if ((-1 < (int)param_1) && (param_1 < uNumber_013f3ac0)) {
      local_6c = &DAT_013f3ae0 + ((int)param_1 >> 5);
      iVar8 = (param_1 & 0x1f) * 0x40;
      if ((*(byte *)(*local_6c + 4 + iVar8) & 1) != 0) {
        ___lock_fhandle(local_70);
        local_8 = (undefined *)0x0;
        if ((*(byte *)(*local_6c + 4 + iVar8) & 1) == 0) {
LAB_00ab435e:
          piVar3 = __errno();
          *piVar3 = 9;
LAB_00ab4369:
          local_68 = 0xffffffff;
        }
        else {
          DVar4 = GetFileType(*(HANDLE *)(*local_6c + iVar8));
          uVar5 = DVar4 & 0xffff7fff;
          if (uVar5 == 1) {
            *(undefined2 *)((int)param_2 + 6) = 0;
            *(undefined2 *)(param_2 + 3) = 0;
            *(undefined2 *)((int)param_2 + 10) = 0;
            *(undefined2 *)(param_2 + 1) = 0;
            *(undefined2 *)(param_2 + 2) = 1;
            BVar6 = GetFileInformationByHandle(*(HANDLE *)(*local_6c + iVar8),&local_64);
            if (BVar6 == 0) {
LAB_00ab43a7:
              DVar4 = GetLastError();
              __dosmaperr(DVar4);
              goto LAB_00ab4369;
            }
            if (((byte)local_64.dwFileAttributes & 1) == 0) {
              uVar1 = *(ushort *)((int)param_2 + 6) | 0x1b6;
            }
            else {
              uVar1 = *(ushort *)((int)param_2 + 6) | 0x124;
            }
            *(ushort *)((int)param_2 + 6) = uVar1;
            if ((local_64.ftLastWriteTime.dwLowDateTime == 0) &&
               (local_64.ftLastWriteTime.dwHighDateTime == 0)) {
              param_2[8] = 0;
              param_2[9] = 0;
            }
            else {
              BVar6 = FileTimeToLocalFileTime(&local_64.ftLastWriteTime,&local_78);
              if ((BVar6 == 0) || (BVar6 = FileTimeToSystemTime(&local_78,local_30), BVar6 == 0))
              goto LAB_00ab4369;
              _Var9 = ___loctotime64_t((uint)local_30[0].wYear,(uint)local_30[0].wMonth,
                                       (uint)local_30[0].wDay,(uint)local_30[0].wHour,
                                       (uint)local_30[0].wMinute,(uint)local_30[0].wSecond,-1);
              *(__time64_t *)(param_2 + 8) = _Var9;
            }
            if ((local_64.ftLastAccessTime.dwLowDateTime == 0) &&
               (local_64.ftLastAccessTime.dwHighDateTime == 0)) {
              param_2[6] = param_2[8];
              param_2[7] = param_2[9];
            }
            else {
              BVar6 = FileTimeToLocalFileTime(&local_64.ftLastAccessTime,&local_78);
              if ((BVar6 == 0) || (BVar6 = FileTimeToSystemTime(&local_78,local_30), BVar6 == 0))
              goto LAB_00ab4369;
              _Var9 = ___loctotime64_t((uint)local_30[0].wYear,(uint)local_30[0].wMonth,
                                       (uint)local_30[0].wDay,(uint)local_30[0].wHour,
                                       (uint)local_30[0].wMinute,(uint)local_30[0].wSecond,-1);
              *(__time64_t *)(param_2 + 6) = _Var9;
            }
            if ((local_64.ftCreationTime.dwLowDateTime == 0) &&
               (local_64.ftCreationTime.dwHighDateTime == 0)) {
              param_2[10] = param_2[8];
              param_2[0xb] = param_2[9];
            }
            else {
              BVar6 = FileTimeToLocalFileTime(&local_64.ftCreationTime,&local_78);
              if ((BVar6 == 0) || (BVar6 = FileTimeToSystemTime(&local_78,local_30), BVar6 == 0))
              goto LAB_00ab4369;
              _Var9 = ___loctotime64_t((uint)local_30[0].wYear,(uint)local_30[0].wMonth,
                                       (uint)local_30[0].wDay,(uint)local_30[0].wHour,
                                       (uint)local_30[0].wMinute,(uint)local_30[0].wSecond,-1);
              *(__time64_t *)(param_2 + 10) = _Var9;
            }
            param_2[5] = local_64.nFileSizeLow;
            *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 0x8000;
            *param_2 = 0;
            param_2[4] = 0;
          }
          else {
            if (uVar5 == 2) {
              uVar7 = 0x2000;
            }
            else {
              if (uVar5 != 3) {
                if (uVar5 != 0) goto LAB_00ab43a7;
                goto LAB_00ab435e;
              }
              uVar7 = 0x1000;
            }
            *(undefined2 *)((int)param_2 + 6) = uVar7;
            *param_2 = local_70;
            param_2[4] = local_70;
            *(undefined2 *)(param_2 + 2) = 1;
            *(undefined2 *)(param_2 + 1) = 0;
            *(undefined2 *)(param_2 + 3) = 0;
            *(undefined2 *)((int)param_2 + 10) = 0;
            param_2[10] = 0;
            param_2[0xb] = 0;
            param_2[8] = 0;
            param_2[9] = 0;
            param_2[6] = 0;
            param_2[7] = 0;
            if (uVar5 == 2) {
              param_2[5] = 0;
            }
            else {
              BVar6 = PeekNamedPipe(*(HANDLE *)(*local_6c + iVar8),(LPVOID)0x0,0,(LPDWORD)0x0,
                                    (LPDWORD)&local_6c,(LPDWORD)0x0);
              param_2[5] = -(uint)(BVar6 != 0) & (uint)local_6c;
            }
          }
        }
        local_8 = (undefined *)0xfffffffe;
        FUN_00ab45e4();
        goto LAB_00ab437c;
      }
    }
    puVar2 = ___doserrno();
    *puVar2 = 0;
    piVar3 = __errno();
    *piVar3 = 9;
  }
  FUN_00ab7c17();
LAB_00ab437c:
  FUN_00ac10f8();
  return;
}

