// FUN_009aa7c0 @ 009aa7c0 body=[[009aa7c0, 009aa858] [009aa860, 009aa90b] [009aa90f, 009aaa6a] [009aaa6e, 009aaac5] [009aaac9, 009aad93] [009aad97, 009aaebd] [009aaec1, 009ab0a8] [009ab0ae, 009ab1ab] [009ab1b1, 009ab215] [009ab219, 009ab3b9] [009ab3bf, 009ab3d9] [009ab3dd, 009ab3ed] [009ab3f1, 009ab41f] [009ab423, 009ab44b] [009ab44f, 009ab465]]


void FUN_009aa7c0(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  void **ppvVar3;
  undefined3 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *****pppppuVar7;
  int iVar8;
  int iVar9;
  int local_2a8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 local_284 [5];
  uint local_270;
  uint local_268 [4];
  undefined4 local_258;
  uint local_254;
  uint local_24c [4];
  undefined4 local_23c;
  uint local_238;
  undefined4 ****local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  uint local_21c;
  uint local_210 [9];
  uint local_1ec;
  undefined4 local_1dc;
  uint local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  uint local_1a4;
  undefined4 local_194;
  uint local_190;
  uint local_188;
  undefined4 local_178;
  uint local_174;
  undefined4 local_16c;
  uint local_158;
  undefined4 local_150;
  uint local_13c;
  undefined **appuStack_68 [19];
  void *local_1c;
  undefined1 *puStack_18;
  undefined1 local_14;
  undefined3 uStack_13;
  
  puStack_18 = &LAB_00b578fe;
  local_1c = ExceptionList;
  iVar8 = 0;
  iVar9 = 0;
  local_2a8 = 0;
  local_238 = 0xf;
  local_23c = 0;
  local_24c[0] = local_24c[0] & 0xffffff00;
  local_1d8 = 0xf;
  local_1dc = 0;
  local_1ec = local_1ec & 0xffffff00;
  local_254 = 0xf;
  local_258 = 0;
  local_268[0] = local_268[0] & 0xffffff00;
  uStack_13 = 0;
  uVar4 = uStack_13;
  local_14 = 2;
  uStack_13 = 0;
  local_2a0 = 0;
  uStack_29c = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  bVar2 = false;
  ExceptionList = &local_1c;
  ppvVar3 = &local_1c;
  if (0 < (int)param_2[4]) {
    do {
      ExceptionList = ppvVar3;
      puVar5 = param_2;
      if (0xf < (uint)param_2[5]) {
        puVar5 = (undefined4 *)*param_2;
      }
      cVar1 = *(char *)((int)puVar5 + iVar9);
      switch(local_2a8) {
      case 0:
        if (cVar1 != '\\') {
          if (cVar1 == -0x80) {
            if (iVar8 != iVar9) {
              FUN_009895f0(iVar9);
              local_14 = 3;
              iVar8 = FUN_00aae9af(0x20);
              local_14 = 4;
              if (iVar8 != 0) {
                FUN_009abdd0(iVar8,local_284);
              }
              local_14 = 3;
              FUN_0068f390();
              local_14 = 2;
              if (0xf < local_270) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_284[0]);
              }
            }
            local_2a8 = 1;
          }
          else if (cVar1 == -0x43) {
            if (iVar8 != iVar9) {
              FUN_009895f0(iVar9);
              local_14 = 5;
              iVar8 = FUN_00aae9af(0x20);
              local_14 = 6;
              if (iVar8 != 0) {
                FUN_009abdd0(iVar8,local_284);
              }
              local_14 = 5;
              FUN_0068f390();
              local_14 = 2;
              FUN_00408ad0();
            }
            local_2a8 = 1;
          }
          else {
            if (cVar1 != '$') break;
            if (iVar8 != iVar9) {
              FUN_009895f0(iVar9);
              local_14 = 7;
              iVar8 = FUN_00aae9af(0x20);
              local_14 = 8;
              if (iVar8 != 0) {
                FUN_009abdd0(iVar8,local_284);
              }
              local_14 = 7;
              FUN_0068f390();
              local_14 = 2;
              FUN_00408ad0();
            }
            local_2a8 = 3;
          }
          goto LAB_009ab21c;
        }
        iVar9 = iVar9 + 1;
        break;
      case 1:
        if (cVar1 == -0x80) {
          if (iVar8 != iVar9) {
            uVar6 = FUN_009895f0(iVar9);
            local_14 = 0x13;
            FUN_00408ed0(uVar6,0,0xffffffff);
            local_14 = 2;
            if (0xf < local_190) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_1a4);
            }
            local_190 = 0xf;
            local_194 = 0;
            local_1a4 = local_1a4 & 0xffffff00;
            puVar5 = (undefined4 *)FUN_00aae9af(0x30);
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = &PTR_FUN_00e38f1c;
              puVar5[6] = 0xf;
              puVar5[5] = 0;
              *(undefined1 *)(puVar5 + 1) = 0;
              local_14 = 0x16;
              FUN_00408ed0(local_268,0,0xffffffff);
              *(ulonglong *)(puVar5 + 8) = CONCAT44(uStack_29c,local_2a0);
              *puVar5 = &PTR_FUN_00e38f34;
              *(ulonglong *)(puVar5 + 10) = CONCAT44(uStack_294,uStack_298);
            }
            local_14 = 2;
            FUN_0068f390();
          }
          local_1d0 = 0;
          uStack_1cc = 0;
          uStack_1c8 = 0;
          uStack_1c4 = 0;
          local_2a0 = 0;
          uStack_29c = 0;
          uStack_298 = 0;
          uStack_294 = 0;
          local_2a8 = 0;
        }
        else if (cVar1 == -0x43) {
          if (iVar8 != iVar9) {
            uVar6 = FUN_009895f0(iVar9);
            local_14 = 0x17;
            FUN_00408ed0(uVar6,0,0xffffffff);
            local_14 = 2;
            if (0xf < local_174) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_188);
            }
            local_174 = 0xf;
            local_178 = 0;
            local_188 = local_188 & 0xffffff00;
            puVar5 = (undefined4 *)FUN_00aae9af(0x30);
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = &PTR_FUN_00e38f1c;
              puVar5[6] = 0xf;
              puVar5[5] = 0;
              *(undefined1 *)(puVar5 + 1) = 0;
              local_14 = 0x1a;
              FUN_00408ed0(local_268,0,0xffffffff);
              *(ulonglong *)(puVar5 + 8) = CONCAT44(uStack_29c,local_2a0);
              *puVar5 = &PTR_FUN_00e38f34;
              *(ulonglong *)(puVar5 + 10) = CONCAT44(uStack_294,uStack_298);
            }
            local_14 = 2;
            FUN_0068f390();
          }
          local_1c0 = 0;
          uStack_1bc = 0;
          uStack_1b8 = 0;
          uStack_1b4 = 0;
          local_2a0 = 0;
          uStack_29c = 0;
          uStack_298 = 0;
          uStack_294 = 0;
          local_2a8 = 0;
        }
        else {
          if (cVar1 != '|') break;
          if (iVar8 != iVar9) {
            uVar6 = FUN_009895f0(iVar9);
            local_14 = 0x1d;
            FUN_00408ed0(uVar6,0,0xffffffff);
            local_14 = 2;
            FUN_00408ad0();
          }
          local_2a8 = 2;
        }
        goto LAB_009ab21c;
      case 2:
        if (cVar1 == -0x80) {
          if (iVar8 != iVar9) {
            FUN_009895f0(iVar9);
            local_14 = 0x1e;
            FUN_009a93e0(&local_2a0);
            puVar5 = (undefined4 *)FUN_00aae9af(0x30);
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = &PTR_FUN_00e38f1c;
              puVar5[6] = 0xf;
              puVar5[5] = 0;
              *(undefined1 *)(puVar5 + 1) = 0;
              local_14 = 0x21;
              FUN_00408ed0(local_268,0,0xffffffff);
              *(ulonglong *)(puVar5 + 8) = CONCAT44(uStack_29c,local_2a0);
              *puVar5 = &PTR_FUN_00e38f34;
              *(ulonglong *)(puVar5 + 10) = CONCAT44(uStack_294,uStack_298);
            }
            local_14 = 0x1e;
            FUN_0068f390();
            local_14 = 2;
            if (0xf < local_270) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_284[0]);
            }
          }
          local_230 = (undefined4 *****)0x0;
          uStack_22c = 0;
          uStack_228 = 0;
          uStack_224 = 0;
          local_2a0 = 0;
          uStack_29c = 0;
          uStack_298 = 0;
          uStack_294 = 0;
          local_2a8 = 0;
        }
        else if (cVar1 == -0x43) {
          if (iVar8 != iVar9) {
            FUN_009895f0(iVar9);
            local_14 = 0x22;
            FUN_009a93e0(&local_2a0);
            puVar5 = (undefined4 *)FUN_00aae9af(0x30);
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = &PTR_FUN_00e38f1c;
              puVar5[6] = 0xf;
              puVar5[5] = 0;
              *(undefined1 *)(puVar5 + 1) = 0;
              local_14 = 0x25;
              FUN_00408ed0(local_268,0,0xffffffff);
              *(ulonglong *)(puVar5 + 8) = CONCAT44(uStack_29c,local_2a0);
              *puVar5 = &PTR_FUN_00e38f34;
              *(ulonglong *)(puVar5 + 10) = CONCAT44(uStack_294,uStack_298);
            }
            local_14 = 0x22;
            FUN_0068f390();
            local_14 = 2;
            if (0xf < local_270) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_284[0]);
            }
          }
          local_210[0] = 0;
          local_210[1] = 0;
          local_210[2] = 0;
          local_210[3] = 0;
          local_2a0 = 0;
          uStack_29c = 0;
          uStack_298 = 0;
          uStack_294 = 0;
          local_2a8 = 0;
        }
        else {
          if (cVar1 != '|') break;
          if (iVar8 != iVar9) {
            FUN_009895f0(iVar9);
            FUN_009a93e0(&local_2a0);
            if (0xf < local_270) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_284[0]);
            }
          }
        }
LAB_009ab21c:
        iVar8 = iVar9 + 1;
        break;
      case 3:
        if (cVar1 == ':') {
          if (!bVar2) {
            uVar6 = FUN_009895f0(iVar9);
            local_14 = 9;
            FUN_00408ed0(uVar6,0,0xffffffff);
            local_14 = 2;
            if (0xf < local_158) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_16c);
            }
            local_2a8 = 4;
            goto LAB_009ab21c;
          }
        }
        else {
          if (cVar1 == '#') {
            uVar6 = FUN_009895f0(iVar9);
            local_14 = 10;
            FUN_00408ed0(uVar6,0,0xffffffff);
            local_14 = 2;
            if (0xf < local_13c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_150);
            }
            bVar2 = true;
            goto LAB_009ab21c;
          }
          if (bVar2) {
            if (cVar1 == '$') {
              if (iVar8 != iVar9) {
                FUN_009895f0(iVar9);
                local_14 = 0xe;
                iVar8 = FUN_00aae9af(0x40);
                local_14 = 0xf;
                if (iVar8 != 0) {
                  FUN_009ac6a0(iVar8,*param_1,local_284);
                }
                _local_14 = CONCAT31(uStack_13,0xe);
                FUN_0068f390();
                goto LAB_009aac0d;
              }
              goto LAB_009aac29;
            }
          }
          else if (cVar1 == '$') {
            if (iVar8 != iVar9) {
              uVar6 = FUN_009895f0(iVar9);
              local_14 = 0xb;
              FUN_00408ed0(uVar6,0,0xffffffff);
              local_14 = 2;
              FUN_00408ad0();
              puVar5 = (undefined4 *)FUN_00aae9af(0x20);
              if (puVar5 != (undefined4 *)0x0) {
                local_14 = 0xd;
                *puVar5 = &PTR_FUN_00e38f64;
                puVar5[6] = 0xf;
                puVar5[5] = 0;
                *(undefined1 *)(puVar5 + 1) = 0;
                FUN_00408ed0(local_24c,0,0xffffffff);
              }
              local_14 = 2;
              FUN_0068f390();
            }
            local_2a8 = 0;
            goto LAB_009ab21c;
          }
        }
        break;
      case 4:
        if (cVar1 == '#') {
          bVar2 = true;
          goto LAB_009ab21c;
        }
        if (bVar2) {
          if (cVar1 == '$') {
            if (iVar8 != iVar9) {
              FUN_009895f0(iVar9);
              local_14 = 0x10;
              iVar8 = FUN_00aae9af(0x40);
              local_14 = 0x11;
              if (iVar8 != 0) {
                FUN_009ac6a0(iVar8,*param_1,local_284);
              }
              _local_14 = CONCAT31(uStack_13,0x10);
              FUN_0068f390();
LAB_009aac0d:
              FUN_0068f390();
              local_14 = 2;
              FUN_00408ad0();
            }
LAB_009aac29:
            local_2a8 = 0;
            bVar2 = false;
            goto LAB_009ab21c;
          }
        }
        else if (cVar1 == '$') {
          if (iVar8 != iVar9) {
            uVar6 = FUN_009895f0(iVar9);
            local_14 = 0x12;
            FUN_00408ed0(uVar6,0,0xffffffff);
            local_14 = 2;
            FUN_00408ad0();
            FUN_009abc50(local_24c);
            FUN_0068f390();
          }
          local_2a8 = 0;
          goto LAB_009ab21c;
        }
      }
      iVar9 = iVar9 + 1;
      ppvVar3 = ExceptionList;
    } while (iVar9 < (int)param_2[4]);
    if (iVar8 != iVar9) {
      FUN_009895f0(iVar9);
      local_14 = 0x26;
      puVar5 = (undefined4 *)FUN_00aae9af(0x20);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = &PTR_FUN_00e38f1c;
        puVar5[6] = 0xf;
        puVar5[5] = 0;
        *(undefined1 *)(puVar5 + 1) = 0;
        local_14 = 0x29;
        FUN_00408ed0(&local_230,0,0xffffffff);
      }
      local_14 = 0x26;
      FUN_0068f390();
      if (local_2a8 != 0) {
        local_210[5] = 0xf;
        local_210[4] = 0;
        local_210[0] = local_210[0] & 0xffffff00;
        FUN_00409350("internationalizedtext.cpp",0x19);
        local_14 = 0x2a;
        uVar6 = FUN_004015b0(local_210,0x2ef,0x1000);
        local_14 = 0x2b;
        FUN_00987d50(uVar6,"TEXT ERROR: The tag for $",0x19,0);
        pppppuVar7 = (undefined4 *****)local_230;
        if (local_21c < 0x10) {
          pppppuVar7 = &local_230;
        }
        uVar6 = FUN_00418e30(uVar6,pppppuVar7);
        uVar6 = FUN_00418e30(uVar6,&DAT_00e29e64);
        FUN_00401280(uVar6);
        local_14 = 0x2a;
        FUN_00987ac0(appuStack_68);
        appuStack_68[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_68);
        if (0xf < local_210[5]) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_210[0]);
        }
      }
      if (0xf < local_21c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_230);
      }
    }
    uVar4 = uStack_13;
    if (0xf < local_254) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_268[0]);
    }
  }
  uStack_13 = uVar4;
  local_254 = 0xf;
  local_258 = 0;
  local_268[0] = local_268[0] & 0xffffff00;
  if (0xf < local_1d8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_1ec);
  }
  local_1d8 = 0xf;
  local_1dc = 0;
  local_1ec = local_1ec & 0xffffff00;
  if (0xf < local_238) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_24c[0]);
  }
  ExceptionList = local_1c;
  return;
}

