// FUN_00b2bbb0 @ 00b2bbb0 body=[[00b2bbb0, 00b2bdc2]]


int FUN_00b2bbb0(int *param_1,uint *param_2,uint *param_3,int *param_4,int *param_5,int *param_6,
                code *param_7)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  iVar2 = FUN_00b2b7e0(param_1,&local_c);
  if (iVar2 == 0) {
    *param_2 = local_c;
    param_2[1] = local_8;
    iVar2 = FUN_00b2b7e0(param_1,&local_c);
    if (iVar2 == 0) {
      if (((local_8 != 0) || (0x7fffffff < local_c)) || (0x3ffffff < local_c)) {
        return -0x7fffbfff;
      }
      *param_3 = local_c;
      iVar2 = FUN_00b2b980(param_1,9,0);
      if (iVar2 == 0) {
        if (*param_3 == 0) {
          *param_4 = 0;
        }
        else {
          iVar2 = (*param_7)(*param_3 * 8);
          *param_4 = iVar2;
          if (iVar2 == 0) {
            return -0x7ff8fff2;
          }
        }
        uVar3 = 0;
        if (*param_3 != 0) {
          do {
            puVar1 = (uint *)(*param_4 + uVar3 * 8);
            iVar2 = FUN_00b2b7e0(param_1,&local_c);
            if (iVar2 != 0) {
              return iVar2;
            }
            uVar3 = uVar3 + 1;
            *puVar1 = local_c;
            puVar1[1] = local_8;
          } while (uVar3 < *param_3);
        }
        iVar2 = FUN_00b2b7e0(param_1,&local_c);
        if (iVar2 == 0) {
          while (local_c != 0 || local_8 != 0) {
            if ((local_c == 10) && (local_8 == 0)) {
              iVar2 = FUN_00b2bb30(param_1,*param_3,param_5,param_6,param_7);
            }
            else {
              iVar2 = FUN_00b2b7e0(param_1,&local_14);
              if (iVar2 != 0) {
                return iVar2;
              }
              if ((local_10 == 0) && (local_14 <= (uint)param_1[1])) {
                *param_1 = *param_1 + local_14;
                param_1[1] = param_1[1] - local_14;
                iVar2 = 0;
              }
              else {
                iVar2 = 6;
              }
            }
            if (iVar2 != 0) {
              return iVar2;
            }
            iVar2 = FUN_00b2b7e0(param_1,&local_c);
            if (iVar2 != 0) {
              return iVar2;
            }
          }
          if (*param_5 == 0) {
            if (*param_3 == 0) {
              *param_5 = 0;
            }
            else {
              iVar2 = (*param_7)(*param_3);
              *param_5 = iVar2;
              if (iVar2 == 0) {
                return -0x7ff8fff2;
              }
            }
            if (*param_3 == 0) {
              *param_6 = 0;
            }
            else {
              iVar2 = (*param_7)(*param_3 * 4);
              *param_6 = iVar2;
              if (iVar2 == 0) {
                return -0x7ff8fff2;
              }
            }
            uVar3 = 0;
            if (*param_3 != 0) {
              do {
                *(undefined1 *)(uVar3 + *param_5) = 0;
                *(undefined4 *)(*param_6 + uVar3 * 4) = 0;
                uVar3 = uVar3 + 1;
              } while (uVar3 < *param_3);
            }
          }
          iVar2 = 0;
        }
      }
    }
  }
  return iVar2;
}

