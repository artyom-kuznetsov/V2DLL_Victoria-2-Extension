// FUN_009d5bc0 @ 009d5bc0 body=[[009d5bc0, 009d5cb4]]


/* WARNING: Removing unreachable block (ram,0x009d5c04) */
/* WARNING: Removing unreachable block (ram,0x009d5c11) */

longlong FUN_009d5bc0(short *param_1,uint param_2,int param_3)

{
  short sVar1;
  int *in_ECX;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  longlong local_10;
  
  local_10 = 0;
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    while( true ) {
      do {
        lVar4 = FUN_009d6810();
        if (lVar4 < 1) {
          sVar1 = (**(code **)(*in_ECX + 0x1c))();
          if (sVar1 == -1) {
            return local_10;
          }
          *param_1 = sVar1;
          local_10 = local_10 + 1;
          bVar3 = param_2 != 0;
          param_2 = param_2 - 1;
          param_3 = param_3 + -1 + (uint)bVar3;
          param_1 = param_1 + 1;
        }
        else {
          if (CONCAT44(param_3,param_2) < lVar4) {
            lVar4 = CONCAT44(param_3,param_2);
          }
          uVar2 = (uint)lVar4;
          FID_conflict__memcpy(param_1,*(void **)in_ECX[8],uVar2 * 2);
          local_10 = lVar4 + local_10;
          bVar3 = param_2 < uVar2;
          param_2 = param_2 - uVar2;
          param_3 = (param_3 - (int)((ulonglong)lVar4 >> 0x20)) - (uint)bVar3;
          *(int *)in_ECX[0xc] = *(int *)in_ECX[0xc] - uVar2;
          *(int *)in_ECX[8] = *(int *)in_ECX[8] + uVar2 * 2;
          param_1 = param_1 + uVar2;
        }
      } while (0 < param_3);
      if (param_3 < 0) break;
      if (param_2 == 0) {
        return local_10;
      }
    }
    return local_10;
  }
  return 0;
}

