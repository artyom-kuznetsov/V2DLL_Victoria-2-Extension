// FUN_00850b20 @ 00850b20 body=[[00850b20, 00850b8c] [00850b90, 00850e6b] [00850e70, 00850f97] [00850fa0, 00851128]]


/* WARNING: Removing unreachable block (ram,0x00850f34) */
/* WARNING: Removing unreachable block (ram,0x00850c54) */

int FUN_00850b20(float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int local_24;
  undefined4 *local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int *local_c;
  float local_8;
  
  iVar5 = (int)param_1;
  if ((*(int *)(*(int *)(param_2 + 0xdc) + 300) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_2 + 0xdc) + 0xe8), iVar1 != 0)) {
    iVar2 = *(int *)((int)param_1 + 0x38);
    local_10 = 0;
    local_8 = 100000.0;
    iVar6 = FUN_0048e120();
    if (*(int *)(iVar6 + 4) == iVar2) {
      local_1c = *(int **)(iVar1 + 4);
      if (local_1c != (int *)0x0) {
        do {
          piVar3 = (int *)local_1c[2];
          iVar1 = *local_1c;
          local_1c = piVar3;
          if ((*(int *)(iVar1 + 300) == *(int *)(iVar5 + 0x38)) && (*(int *)(iVar1 + 0x10c) == 0)) {
            FUN_004a0e80(DAT_0125870c,&local_20);
            param_1 = (float)(int)local_20 / 1000.0;
            if ((0.0 < param_1) &&
               (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x38) * 4) + 0xbe4)
                == *(int *)(iVar1 + 0x58))) {
              param_1 = param_1 - 15.0;
            }
            local_24 = *(int *)(iVar1 + 0x58);
            local_14 = *(int **)(iVar1 + 0x5c);
            auVar9 = ZEXT416((uint)((float)((uint)(*(int *)(param_2 + 0x14) + local_24) % 5) * 10.0
                                   + param_1));
            local_18 = 0;
            if (0 < (local_14[0x33] - local_14[0x32]) / 0x24) {
              local_c = (int *)local_14[0x32];
              do {
                if ((*local_c != 4) &&
                   (iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + local_c[1] * 4),
                   *(char *)(*(int *)(iVar1 + 0x5c) + 0x2a) != '\0')) {
                  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x38) * 4);
                  if ((*(int *)(iVar1 + 300) != *(int *)(iVar2 + 0x20)) &&
                     (((*(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + *(int *)(iVar1 + 300) * 4) +
                                0x34) != 0 ||
                       (((*(char *)(iVar1 + 0x128) == 'R' && (*(char *)(iVar1 + 0x129) == 'E')) &&
                        (*(char *)(iVar1 + 0x12a) == 'B')))) ||
                      (((*(char *)(iVar2 + 0x1c) == 'R' && (*(char *)(iVar2 + 0x1d) == 'E')) &&
                       (*(char *)(iVar2 + 0x1e) == 'B')))))) {
                    auVar8._8_8_ = auVar9._8_8_;
                    auVar8._0_8_ = (double)auVar9._0_4_ + 5.0;
                    auVar9._4_12_ = auVar8._4_12_;
                    auVar9._0_4_ = (float)auVar8._0_8_;
                  }
                  if ((*(int *)(iVar1 + 0x110) == 0) ||
                     (iVar2 = *(int *)(*(int *)(iVar1 + 0x110) + 0x10),
                     (int)(*(int *)(iVar2 + 0x38) - *(int *)(iVar2 + 0x34) & 0xfffffff8U) < 1)) {
                    pcVar7 = (char *)(iVar1 + 0x130);
                  }
                  else {
                    pcVar7 = *(char **)(iVar2 + 0x34);
                  }
                  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x38) * 4);
                  if ((*(int *)(pcVar7 + 4) != *(int *)(iVar1 + 0x20)) &&
                     (((*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + *(int *)(pcVar7 + 4) * 4) + 0x34
                                ) != 0 ||
                       (((*pcVar7 == 'R' && (pcVar7[1] == 'E')) && (pcVar7[2] == 'B')))) ||
                      (((*(char *)(iVar1 + 0x1c) == 'R' && (*(char *)(iVar1 + 0x1d) == 'E')) &&
                       (*(char *)(iVar1 + 0x1e) == 'B')))))) {
                    auVar10._8_8_ = auVar9._8_8_;
                    auVar10._0_8_ = (double)auVar9._0_4_ + 20.0;
                    auVar9._4_12_ = auVar10._4_12_;
                    auVar9._0_4_ = (float)auVar10._0_8_;
                  }
                }
                local_c = local_c + 9;
                local_18 = local_18 + 1;
              } while (local_18 < (local_14[0x33] - local_14[0x32]) / 0x24);
            }
            if (auVar9._0_4_ < local_8) {
              local_10 = local_24;
              local_8 = auVar9._0_4_;
            }
          }
        } while (local_1c != (int *)0x0);
        return local_10;
      }
    }
    else {
      puVar4 = *(undefined4 **)(iVar1 + 0x14);
      while (puVar4 != (undefined4 *)0x0) {
        local_20 = (undefined4 *)puVar4[2];
        iVar1 = *(int *)*puVar4;
        iVar2 = *(int *)(iVar5 + 0x38);
        iVar6 = FUN_0048e120();
        puVar4 = local_20;
        if (*(int *)(iVar6 + 4) == iVar2) {
          piVar3 = *(int **)(iVar1 + 4);
          while (puVar4 = local_20, piVar3 != (int *)0x0) {
            local_14 = (int *)piVar3[2];
            iVar1 = *piVar3;
            piVar3 = local_14;
            if ((*(int *)(iVar1 + 300) == *(int *)(iVar5 + 0x38)) && (*(int *)(iVar1 + 0x10c) == 0))
            {
              FUN_004a0e80(DAT_0125870c,&local_24);
              param_1 = (float)local_24 / 1000.0;
              if ((0.0 < param_1) &&
                 (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x38) * 4) + 0xbe4
                          ) == *(int *)(iVar1 + 0x58))) {
                param_1 = param_1 - 15.0;
              }
              local_1c = *(int **)(iVar1 + 0x5c);
              auVar12 = ZEXT416((uint)((float)((uint)(*(int *)(param_2 + 0x14) +
                                                     *(int *)(iVar1 + 0x58)) % 5) * 10.0 + param_1))
              ;
              local_18 = 0;
              if (0 < (*(int *)((int)local_1c + 0xcc) - *(int *)((int)local_1c + 200)) / 0x24) {
                local_c = *(int **)((int)local_1c + 200);
                do {
                  if ((*local_c != 4) &&
                     (iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + local_c[1] * 4),
                     *(char *)(*(int *)(iVar2 + 0x5c) + 0x2a) != '\0')) {
                    iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x38) * 4);
                    if ((*(int *)(iVar2 + 300) != *(int *)(iVar6 + 0x20)) &&
                       (((*(int *)(*(int *)(*(int *)(iVar6 + 0xbe8) + *(int *)(iVar2 + 300) * 4) +
                                  0x34) != 0 ||
                         (((*(char *)(iVar2 + 0x128) == 'R' && (*(char *)(iVar2 + 0x129) == 'E')) &&
                          (*(char *)(iVar2 + 0x12a) == 'B')))) ||
                        (((*(char *)(iVar6 + 0x1c) == 'R' && (*(char *)(iVar6 + 0x1d) == 'E')) &&
                         (*(char *)(iVar6 + 0x1e) == 'B')))))) {
                      auVar11._8_8_ = auVar12._8_8_;
                      auVar11._0_8_ = (double)auVar12._0_4_ + 5.0;
                      auVar12._4_12_ = auVar11._4_12_;
                      auVar12._0_4_ = (float)auVar11._0_8_;
                    }
                    if ((*(int *)(iVar2 + 0x110) == 0) ||
                       (iVar6 = *(int *)(*(int *)(iVar2 + 0x110) + 0x10),
                       (int)(*(int *)(iVar6 + 0x38) - *(int *)(iVar6 + 0x34) & 0xfffffff8U) < 1)) {
                      pcVar7 = (char *)(iVar2 + 0x130);
                    }
                    else {
                      pcVar7 = *(char **)(iVar6 + 0x34);
                    }
                    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar5 + 0x38) * 4);
                    if ((*(int *)(pcVar7 + 4) != *(int *)(iVar2 + 0x20)) &&
                       (((*(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + *(int *)(pcVar7 + 4) * 4) +
                                  0x34) != 0 ||
                         (((*pcVar7 == 'R' && (pcVar7[1] == 'E')) && (pcVar7[2] == 'B')))) ||
                        (((*(char *)(iVar2 + 0x1c) == 'R' && (*(char *)(iVar2 + 0x1d) == 'E')) &&
                         (*(char *)(iVar2 + 0x1e) == 'B')))))) {
                      auVar13._8_8_ = auVar12._8_8_;
                      auVar13._0_8_ = (double)auVar12._0_4_ + 20.0;
                      auVar12._4_12_ = auVar13._4_12_;
                      auVar12._0_4_ = (float)auVar13._0_8_;
                    }
                  }
                  local_c = local_c + 9;
                  local_18 = local_18 + 1;
                } while (local_18 <
                         (*(int *)((int)local_1c + 0xcc) - *(int *)((int)local_1c + 200)) / 0x24);
              }
              piVar3 = local_14;
              if (auVar12._0_4_ < local_8) {
                local_10 = *(int *)(iVar1 + 0x58);
                local_8 = auVar12._0_4_;
              }
            }
          }
        }
      }
    }
    return local_10;
  }
  return 0;
}

