// FUN_00b14510 @ 00b14510 body=[[00b14510, 00b14569] [00b14570, 00b1464e]]


uint FUN_00b14510(int *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  uint in_EAX;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int *in_ECX;
  undefined1 local_d;
  char local_c [4];
  uint local_8;
  uint local_4;
  
  if (*in_ECX == 0) {
    return in_EAX & 0xffffff00;
  }
  local_4 = param_1[1];
  uVar4 = 0;
  local_d = 0;
  local_c[1] = 0;
  local_8 = 0;
  if (local_4 != 0) {
    do {
      local_c[0] = *(char *)(local_8 + *param_1);
      if (*in_ECX != 0) {
        bVar3 = false;
        while ((*in_ECX != 0 && (iVar5 = FUN_00aafe90(*in_ECX,local_c), iVar5 != 0))) {
          iVar2 = *in_ECX;
          iVar5 = iVar5 - iVar2;
          if (iVar5 == -1) break;
          pcVar6 = local_c;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          iVar7 = (int)pcVar6 - (int)(local_c + 1);
          FID_conflict__memcpy
                    ((void *)(iVar2 + iVar5),(void *)(iVar2 + iVar7 + iVar5),
                     (in_ECX[1] - iVar7) - iVar5);
          uVar4 = in_ECX[1] - iVar7;
          if (((uint)in_ECX[2] < uVar4) || (*in_ECX == 0)) {
            in_ECX[1] = uVar4;
            in_ECX[2] = uVar4;
            if (*in_ECX == 0) {
              iVar5 = (*(code *)PTR_FUN_00f01b08)(uVar4 + 1,2,4,1,0,0xffffffff);
            }
            else {
              iVar5 = (*(code *)PTR_FUN_00f01b0c)(*in_ECX);
            }
            *in_ECX = iVar5;
            if (iVar5 != 0) {
              *(undefined1 *)(iVar5 + uVar4) = 0;
            }
            bVar3 = true;
          }
          else {
            in_ECX[1] = uVar4;
            *(undefined1 *)(*in_ECX + uVar4) = 0;
            bVar3 = true;
          }
        }
        if (bVar3) {
          local_d = 1;
        }
      }
      uVar4 = local_8 + 1;
      local_8 = uVar4;
    } while (uVar4 < local_4);
  }
  return CONCAT31((int3)(uVar4 >> 8),local_d);
}

