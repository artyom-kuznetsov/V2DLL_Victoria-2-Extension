// FUN_00676790 @ 00676790 body=[[00676790, 00676cc8] [00676cde, 00676ce5] [00676cf0, 00676d47]]


void FUN_00676790(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  size_t _Size;
  int **ppiVar4;
  int *in_ECX;
  int **ppiVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int iStack_44;
  int *apiStack_40 [2];
  int iStack_38;
  size_t sStack_34;
  int iStack_30;
  void *pvStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bb8828;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  _Size = (**(code **)(*DAT_012588e8 + 0x18))();
  sStack_34 = _Size;
  (**(code **)(*in_ECX + 0x58))(&iStack_30);
  if (DAT_00f092fb == '\0') {
    iVar8 = 0;
    if (0 < (int)_Size) {
      do {
        iVar1 = *(int *)(DAT_012588e8[0x2b3] + iVar8 * 4);
        *(undefined1 *)(*(int *)(iVar1 + 0x5c) + 0x29) = 0;
        cVar3 = *(char *)(iVar1 + 0x171);
        *(undefined1 *)(iVar1 + 0x171) = 0;
        if (((cVar3 != '\0') && (*(int *)(iVar1 + 0x54) != 0)) && (*(int *)(iVar1 + 0x58) != 0)) {
          FUN_00648040(*(int *)(iVar1 + 0x58));
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)_Size);
    }
  }
  else {
    pvStack_2c = (void *)0x0;
    uStack_28 = 0;
    uStack_24 = 0;
    FUN_009d7300();
    puStack_10 = (undefined1 *)0x0;
    if (0 < (int)_Size) {
      _memset(pvStack_2c,1,_Size);
    }
    iStack_44 = 0;
    if (0 < (int)_Size) {
      do {
        iVar8 = *(int *)(DAT_012588e8[0x2b3] + iStack_44 * 4);
        if ((*(int *)(iVar8 + 300) == iStack_30) || (*(int *)(iVar8 + 0x134) == iStack_30)) {
          *(undefined1 *)((int)pvStack_2c + iStack_44) = 0;
          iVar1 = *(int *)(iVar8 + 0x5c);
          iVar9 = 0;
          if (0 < (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24) {
            iVar7 = 0;
            do {
              *(undefined1 *)((int)pvStack_2c + *(int *)(iVar7 + 4 + *(int *)(iVar1 + 200))) = 0;
              iVar1 = *(int *)(iVar8 + 0x5c);
              iVar9 = iVar9 + 1;
              iVar7 = iVar7 + 0x24;
            } while (iVar9 < (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24);
          }
        }
        else {
          apiStack_40[0] = *(int **)(iVar8 + 0x128);
          iVar1 = DAT_012587e4[1];
          if (*(char *)(*(int *)(*(int *)(*(int *)(iVar1 + *(int *)(iVar8 + 300) * 4) + 0xbe8) +
                                iStack_30 * 4) + 0x70) == '\0') {
            apiStack_40[0] = *(int **)(iVar8 + 0x130);
            if (*(char *)(*(int *)(*(int *)(*(int *)(iVar1 + *(int *)(iVar8 + 0x134) * 4) + 0xbe8) +
                                  iStack_30 * 4) + 0x70) == '\0') {
              apiStack_40[0] = *(int **)(iVar8 + 0x128);
              if (*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + *(int *)(iVar8 + 300) * 4) + 0xbe8) +
                                   iStack_30 * 4) + 0x20) == 0) {
                apiStack_40[0] = *(int **)(iVar8 + 0x128);
                iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + *(int *)(iVar8 + 300) * 4) + 0xbe8) +
                                iStack_30 * 4);
                if (((*(int **)(iVar1 + 0x24) == (int *)0x0) ||
                    ((iVar9 = (**(code **)(**(int **)(iVar1 + 0x24) + 0x1c))(), iVar9 != 0x336 &&
                     (iVar9 = (**(code **)(**(int **)(iVar1 + 0x24) + 0x1c))(), iVar9 != 0x93a))))
                   || (apiStack_40[0] = *(int **)(*(int *)(iVar1 + 0x24) + 8),
                      *(int *)(*(int *)(iVar1 + 0x24) + 0xc) != *(int *)(iVar1 + 0xc))) {
                  apiStack_40[0] = *(int **)(iVar8 + 0x128);
                  cVar3 = FUN_0051b310(sStack_34,iStack_30);
                  if (cVar3 != '\0') {
                    *(undefined1 *)((int)pvStack_2c + iStack_44) = 0;
                  }
                }
                else {
                  *(undefined1 *)((int)pvStack_2c + iStack_44) = 0;
                }
              }
              else {
                *(undefined1 *)((int)pvStack_2c + iStack_44) = 0;
              }
            }
            else {
              *(undefined1 *)((int)pvStack_2c + iStack_44) = 0;
            }
          }
          else {
            *(undefined1 *)((int)pvStack_2c + iStack_44) = 0;
          }
        }
        iStack_44 = iStack_44 + 1;
      } while (iStack_44 < iStack_38);
    }
    iStack_44 = 0;
    if (0 < *DAT_012587e4) {
      do {
        iVar8 = *(int *)(DAT_012587e4[1] + iStack_44 * 4);
        apiStack_40[0] = *(int **)(iVar8 + 0x1c);
        if ((*(int *)(iVar8 + 0x20) == iStack_30) ||
           (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4[1] + *(int *)(iVar8 + 0x20) * 4) +
                                      0xbe8) + iStack_30 * 4) + 0x20) != 0)) {
          apiStack_40[0] = *(int **)(*(int *)(DAT_012587e4[1] + *(int *)(iVar8 + 0x20) * 4) + 0x7b4)
          ;
          while (apiStack_40[0] != (int *)0x0) {
            iVar8 = *apiStack_40[0];
            apiStack_40[0] = (int *)apiStack_40[0][2];
            *(undefined1 *)((int)pvStack_2c + *(int *)(*(int *)(iVar8 + 0xdc) + 0x58)) = 0;
            iVar1 = *(int *)(*(int *)(iVar8 + 0xdc) + 0x5c);
            iVar9 = 0;
            if (0 < (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24) {
              iVar7 = 0;
              do {
                *(undefined1 *)((int)pvStack_2c + *(int *)(*(int *)(iVar1 + 200) + 4 + iVar7)) = 0;
                iVar1 = *(int *)(*(int *)(iVar8 + 0xdc) + 0x5c);
                iVar9 = iVar9 + 1;
                iVar7 = iVar7 + 0x24;
              } while (iVar9 < (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x24);
            }
          }
        }
        iStack_44 = iStack_44 + 1;
      } while (iStack_44 < *DAT_012587e4);
    }
    iVar8 = 0;
    if (0 < iStack_38) {
      do {
        bVar10 = *(char *)((int)pvStack_2c + iVar8) != '\0';
        iVar1 = *(int *)(DAT_012588e8[0x2b3] + iVar8 * 4);
        if (DAT_00f092fb == '\0') {
          bVar6 = false;
        }
        else {
          bVar6 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x360) < 1;
        }
        if (bVar10 != bVar6) {
          *(bool *)(*(int *)(iVar1 + 0x5c) + 0x29) = bVar10;
          cVar3 = *(char *)(iVar1 + 0x171);
          *(bool *)(iVar1 + 0x171) = bVar10;
          if ((((bool)cVar3 != bVar10) && (iVar9 = *(int *)(iVar1 + 0x54), iVar9 != 0)) &&
             (piVar2 = *(int **)(iVar1 + 0x58), piVar2 != (int *)0x0)) {
            *(uint *)(iVar9 + 0x74) = *(uint *)(iVar9 + 0x74) | 2;
            apiStack_40[0] = piVar2;
            if ((int)piVar2 < 1) {
              if (piVar2 == (int *)0xffffffff) {
                if ((*(int *)(iVar9 + 0x7c) - *(uint *)(iVar9 + 0x78) & 0xfffffffc) == 0) {
                  ppiVar4 = *(int ***)(iVar9 + 0x7c);
                  if ((ppiVar4 <= apiStack_40) ||
                     (ppiVar5 = *(int ***)(iVar9 + 0x78), apiStack_40 < ppiVar5)) {
                    if (ppiVar4 == *(int ***)(iVar9 + 0x80)) {
                      FUN_007b94a0();
                    }
                    if (*(undefined4 **)(iVar9 + 0x7c) != (undefined4 *)0x0) {
                      **(undefined4 **)(iVar9 + 0x7c) = 0xffffffff;
                    }
                    goto LAB_00676c9e;
                  }
                  goto LAB_00676c05;
                }
                goto LAB_00676ca4;
              }
            }
            else if ((int)(*(int *)(iVar9 + 0x7c) - *(int *)(iVar9 + 0x78) & 0xfffffffcU) < 800) {
              ppiVar4 = *(int ***)(iVar9 + 0x7c);
              if ((apiStack_40 < ppiVar4) &&
                 (ppiVar5 = *(int ***)(iVar9 + 0x78), ppiVar5 <= apiStack_40)) {
LAB_00676c05:
                if (ppiVar4 == *(int ***)(iVar9 + 0x80)) {
                  FUN_007b94a0();
                }
                if (*(undefined4 **)(iVar9 + 0x7c) != (undefined4 *)0x0) {
                  **(undefined4 **)(iVar9 + 0x7c) =
                       *(undefined4 *)
                        (*(int *)(iVar9 + 0x78) + ((int)apiStack_40 - (int)ppiVar5 >> 2) * 4);
                }
                *(int *)(iVar9 + 0x7c) = *(int *)(iVar9 + 0x7c) + 4;
              }
              else {
                if (ppiVar4 == *(int ***)(iVar9 + 0x80)) {
                  FUN_007b94a0();
                }
                if (*(undefined4 **)(iVar9 + 0x7c) == (undefined4 *)0x0) {
LAB_00676c9e:
                  *(int *)(iVar9 + 0x7c) = *(int *)(iVar9 + 0x7c) + 4;
                }
                else {
                  **(undefined4 **)(iVar9 + 0x7c) = piVar2;
                  *(int *)(iVar9 + 0x7c) = *(int *)(iVar9 + 0x7c) + 4;
                }
              }
            }
            else {
LAB_00676ca4:
              **(undefined4 **)(iVar9 + 0x78) = 0xffffffff;
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iStack_38);
    }
    if (pvStack_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(pvStack_2c);
    }
  }
  ExceptionList = pvStack_18;
  return;
}

