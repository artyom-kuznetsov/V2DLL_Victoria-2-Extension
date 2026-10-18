// FUN_00ae23b0 @ 00ae23b0 body=[[00ae23b0, 00ae25f8]]


void FUN_00ae23b0(void)

{
  float fVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int *in_ECX;
  uint uVar8;
  
  uVar8 = 0;
  if (in_ECX[2] != 0) {
    do {
      iVar5 = *(int *)(in_ECX[1] + uVar8 * 4);
      uVar2 = *(ushort *)(iVar5 + 0x9c);
      if (((byte)uVar2 >> 1 & 1) == 0) {
        if ((uVar2 >> 0xd & 1) == 0) {
          if ((((*(uint *)(iVar5 + 0x74) != 0xffffffff) &&
               (*(uint *)(iVar5 + 0x74) <= *(uint *)(iVar5 + 0x70))) ||
              ((0.0 < *(float *)(iVar5 + 0x3c) &&
               (*(float *)(iVar5 + 0x3c) < *(float *)(iVar5 + 0x14) !=
                (*(float *)(iVar5 + 0x3c) == *(float *)(iVar5 + 0x14)))))) &&
             ((uVar2 >> 8 & 1) == 0)) {
            FUN_00b08240();
          }
        }
        else {
          uVar3 = *(uint *)(iVar5 + 0x74);
          if (((uVar3 != 0xffffffff) &&
              ((((*(int *)(iVar5 + 0x70) == uVar3 - 1 &&
                 (*(float *)(iVar5 + 0x48) <= *(float *)(iVar5 + 0x20))) && ((uVar2 >> 8 & 1) == 0))
               || ((uVar3 != 0xffffffff && (uVar3 <= *(uint *)(iVar5 + 0x70))))))) ||
             ((0.0 < *(float *)(iVar5 + 0x3c) &&
              (*(float *)(iVar5 + 0x3c) < *(float *)(iVar5 + 0x14) !=
               (*(float *)(iVar5 + 0x3c) == *(float *)(iVar5 + 0x14)))))) {
            if (((uVar3 != 0xffffffff) && (uVar3 <= *(uint *)(iVar5 + 0x70))) ||
               ((0.0 < *(float *)(iVar5 + 0x3c) &&
                (*(float *)(iVar5 + 0x3c) < *(float *)(iVar5 + 0x14) !=
                 (*(float *)(iVar5 + 0x3c) == *(float *)(iVar5 + 0x14)))))) {
              FUN_00b08200(0);
            }
            else {
              FUN_00b08200(*(undefined4 *)(iVar5 + 0x48));
            }
          }
        }
        if (((*(uint *)(iVar5 + 0x74) != 0xffffffff) &&
            (*(uint *)(iVar5 + 0x74) <= *(uint *)(iVar5 + 0x70))) ||
           ((0.0 < *(float *)(iVar5 + 0x3c) &&
            (*(float *)(iVar5 + 0x3c) < *(float *)(iVar5 + 0x14) !=
             (*(float *)(iVar5 + 0x3c) == *(float *)(iVar5 + 0x14)))))) {
          (**(code **)(*(int *)**(undefined4 **)(DAT_00f209e0 + 0x3c) + 0x20))(iVar5);
        }
        if ((0.0 < *(float *)(iVar5 + 0x3c)) &&
           (*(float *)(iVar5 + 0x3c) < *(float *)(iVar5 + 0x38) !=
            (*(float *)(iVar5 + 0x3c) == *(float *)(iVar5 + 0x38)))) {
          (**(code **)(*(int *)**(undefined4 **)(DAT_00f209e0 + 0x3c) + 0x24))(iVar5);
          FUN_00b08240();
        }
      }
      bVar7 = (byte)*(undefined2 *)(iVar5 + 0x9c);
      if ((bVar7 >> 2 & 1) == 0) {
        if ((0.0 < *(float *)(iVar5 + 0x2c)) || (((bVar7 >> 6 & 1) == 0 && ((bVar7 >> 1 & 1) == 0)))
           ) {
          fVar1 = *(float *)(iVar5 + 0x2c);
          if ((!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) &&
             (((bVar7 >> 3 & 1) == 0 && (*(int *)(iVar5 + 0x98) != 1)))) {
            if ((*(int **)(iVar5 + 0x8c) == (int *)0x0) ||
               (cVar4 = (**(code **)(**(int **)(iVar5 + 0x8c) + 0x1c))(), cVar4 != '\0')) {
              if ((*(byte *)(iVar5 + 0x9c) >> 5 & 1) != 0) {
                iVar5 = in_ECX[2] - uVar8;
                while (iVar5 = iVar5 + -1, iVar5 != 0) {
                  (**(code **)(*in_ECX + 0x24))(*(undefined4 *)(in_ECX[1] + 4 + uVar8 * 4));
                }
              }
            }
            else if ((*(byte *)(iVar5 + 0x9c) >> 5 & 1) != 0) {
              uVar6 = (**(code **)(**(int **)(iVar5 + 0x8c) + 4))();
              iVar5 = FUN_00ae1e80(iVar5,uVar6);
              uVar8 = uVar8 - iVar5;
            }
          }
        }
        else {
          (**(code **)(*in_ECX + 0x24))(iVar5);
          uVar8 = uVar8 - 1;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)in_ECX[2]);
  }
  return;
}

