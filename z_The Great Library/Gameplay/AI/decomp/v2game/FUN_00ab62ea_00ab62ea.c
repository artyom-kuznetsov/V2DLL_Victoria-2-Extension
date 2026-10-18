// FUN_00ab62ea @ 00ab62ea body=[[00ab62ea, 00ab6622]]


void FUN_00ab62ea(undefined *param_1)

{
  void *pvVar1;
  _ptiddata p_Var2;
  int iVar3;
  errno_t eVar4;
  wchar_t *pwVar5;
  BOOL BVar6;
  uint uVar7;
  LONG LVar8;
  int in_ECX;
  int iVar9;
  int unaff_ESI;
  undefined1 local_1cc [8];
  int local_1c4;
  uint local_1bc;
  undefined4 local_1b8;
  ushort local_1b4 [4];
  uint *local_1ac;
  undefined4 local_1a8 [2];
  void *local_1a0;
  undefined *local_19c;
  undefined4 *local_198;
  int local_194;
  size_t local_190;
  WORD local_18c [128];
  char local_8c [132];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_19c = param_1;
  local_194 = in_ECX;
  p_Var2 = __getptd();
  iVar3 = __expandlocale(local_19c,local_8c,0x83,local_1b4,local_1a8);
  if (iVar3 != 0) {
    iVar9 = in_ECX * 0x10 + unaff_ESI;
    iVar3 = _strcmp(local_8c,*(char **)(iVar9 + 0x48));
    if (iVar3 != 0) {
      local_190 = _strlen(local_8c);
      local_190 = local_190 + 5;
      local_198 = __malloc_crt(local_190);
      if (local_198 != (undefined4 *)0x0) {
        local_19c = *(undefined **)(iVar9 + 0x48);
        local_1ac = (uint *)(unaff_ESI + 0xc + local_194 * 4);
        local_1bc = *local_1ac;
        local_1a0 = (void *)((local_194 + 6) * 6 + unaff_ESI);
        FID_conflict__memcpy(local_1cc,local_1a0,6);
        local_1b8 = *(undefined4 *)(unaff_ESI + 4);
        eVar4 = _strcpy_s((char *)(local_198 + 1),local_190 - 4,local_8c);
        if (eVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *(undefined4 **)(iVar9 + 0x48) = local_198 + 1;
        *local_1ac = (uint)local_1b4[0];
        FID_conflict__memcpy(local_1a0,local_1b4,6);
        if (local_194 == 2) {
          local_190 = 0;
          *(undefined4 *)(unaff_ESI + 4) = local_1a8[0];
          pwVar5 = (p_Var2->_setloc_data)._cacheout + 9;
          iVar3 = *(int *)((p_Var2->_setloc_data)._cacheout + 0x19);
          local_1a0 = *(void **)((p_Var2->_setloc_data)._cacheout + 0x1b);
          do {
            if (*(int *)(unaff_ESI + 4) == *(int *)pwVar5) {
              if (local_190 != 0) {
                pwVar5 = (p_Var2->_setloc_data)._cacheout + local_190 * 4 + 9;
                *(int *)((p_Var2->_setloc_data)._cacheout + 9) = *(int *)pwVar5;
                *(int *)((p_Var2->_setloc_data)._cacheout + 0xb) = *(int *)(pwVar5 + 2);
                *(int *)pwVar5 = iVar3;
                *(void **)(pwVar5 + 2) = local_1a0;
              }
              break;
            }
            local_1c4 = *(int *)pwVar5;
            local_190 = local_190 + 1;
            *(int *)pwVar5 = iVar3;
            pvVar1 = *(void **)(pwVar5 + 2);
            *(void **)(pwVar5 + 2) = local_1a0;
            pwVar5 = pwVar5 + 4;
            iVar3 = local_1c4;
            local_1a0 = pvVar1;
          } while ((int)local_190 < 5);
          if (local_190 == 5) {
            BVar6 = ___crtGetStringTypeA
                              ((_locale_t)0x0,1,
                               "\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f"
                               ,0x7f,local_18c,*(int *)(unaff_ESI + 4),*(BOOL *)(unaff_ESI + 0x14));
            if (BVar6 == 0) {
              (p_Var2->_setloc_data)._cacheout[0xb] = L'\0';
              (p_Var2->_setloc_data)._cacheout[0xc] = L'\0';
            }
            else {
              uVar7 = 0;
              do {
                local_18c[uVar7] = local_18c[uVar7] & 0x1ff;
                uVar7 = uVar7 + 1;
              } while (uVar7 < 0x7f);
              iVar3 = _memcmp(local_18c,PTR_DAT_00ef2750,0xfe);
              *(uint *)((p_Var2->_setloc_data)._cacheout + 0xb) = (uint)(iVar3 == 0);
            }
            *(undefined4 *)((p_Var2->_setloc_data)._cacheout + 9) = *(undefined4 *)(unaff_ESI + 4);
          }
          *(undefined4 *)(unaff_ESI + 0xa8) =
               *(undefined4 *)((p_Var2->_setloc_data)._cacheout + 0xb);
        }
        if (local_194 == 1) {
          *(undefined4 *)(unaff_ESI + 8) = local_1a8[0];
        }
        iVar3 = (**(code **)(&DAT_00dd9558 + local_194 * 0xc))();
        if (iVar3 == 0) {
          if (local_19c != &DAT_00ef2c84) {
            iVar3 = local_194 + 5;
            LVar8 = InterlockedDecrement(*(LONG **)(unaff_ESI + iVar3 * 0x10));
            if (LVar8 == 0) {
              _free(*(void **)(unaff_ESI + iVar3 * 0x10));
              _free(*(void **)(iVar9 + 0x54));
              *(undefined4 *)(iVar9 + 0x4c) = 0;
            }
          }
          *local_198 = 1;
          *(undefined4 **)(unaff_ESI + (local_194 + 5) * 0x10) = local_198;
        }
        else {
          *(undefined **)(iVar9 + 0x48) = local_19c;
          _free(local_198);
          *local_1ac = local_1bc;
          *(undefined4 *)(unaff_ESI + 4) = local_1b8;
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

