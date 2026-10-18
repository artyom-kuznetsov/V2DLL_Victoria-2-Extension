// FUN_00b13a40 @ 00b13a40 body=[[00b13a40, 00b13b7e]]


uint FUN_00b13a40(char *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  uint in_EAX;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *in_ECX;
  undefined1 local_d;
  char local_c [4];
  uint local_8;
  uint local_4;
  
  if (*in_ECX == 0) {
    return in_EAX & 0xffffff00;
  }
  local_d = 0;
  local_c[1] = 0;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  local_4 = (int)pcVar4 - (int)(param_1 + 1);
  uVar5 = 0;
  local_8 = 0;
  if (local_4 != 0) {
    do {
      local_c[0] = param_1[local_8];
      if (*in_ECX != 0) {
        bVar3 = false;
        while ((*in_ECX != 0 && (iVar6 = FUN_00aafe90(*in_ECX,local_c), iVar6 != 0))) {
          iVar2 = *in_ECX;
          iVar6 = iVar6 - iVar2;
          if (iVar6 == -1) break;
          pcVar4 = local_c;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          iVar7 = (int)pcVar4 - (int)(local_c + 1);
          FID_conflict__memcpy
                    ((void *)(iVar2 + iVar6),(void *)(iVar2 + iVar7 + iVar6),
                     (in_ECX[1] - iVar7) - iVar6);
          uVar5 = in_ECX[1] - iVar7;
          if (((uint)in_ECX[2] < uVar5) || (*in_ECX == 0)) {
            in_ECX[1] = uVar5;
            in_ECX[2] = uVar5;
            if (*in_ECX == 0) {
              iVar6 = (*(code *)PTR_FUN_00f01b08)(uVar5 + 1,2,4,1,0,0xffffffff);
            }
            else {
              iVar6 = (*(code *)PTR_FUN_00f01b0c)(*in_ECX);
            }
            *in_ECX = iVar6;
            if (iVar6 != 0) {
              *(undefined1 *)(iVar6 + uVar5) = 0;
            }
            bVar3 = true;
          }
          else {
            in_ECX[1] = uVar5;
            *(undefined1 *)(*in_ECX + uVar5) = 0;
            bVar3 = true;
          }
        }
        if (bVar3) {
          local_d = 1;
        }
      }
      uVar5 = local_8 + 1;
      local_8 = uVar5;
    } while (uVar5 < local_4);
  }
  return CONCAT31((int3)(uVar5 >> 8),local_d);
}

