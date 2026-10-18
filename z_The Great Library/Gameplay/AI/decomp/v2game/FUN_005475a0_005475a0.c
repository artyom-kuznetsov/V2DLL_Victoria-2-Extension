// FUN_005475a0 @ 005475a0 body=[[005475a0, 00547678]]


/* WARNING: Removing unreachable block (ram,0x005475e1) */
/* WARNING: Removing unreachable block (ram,0x005475ee) */

longlong FUN_005475a0(undefined1 *param_1,uint param_2,int param_3)

{
  int iVar1;
  int *in_ECX;
  uint _Size;
  bool bVar2;
  longlong lVar3;
  longlong local_10;
  
  local_10 = 0;
  if ((-1 < param_3) && ((0 < param_3 || (param_2 != 0)))) {
    while( true ) {
      do {
        lVar3 = FUN_00548870();
        if (lVar3 < 1) {
          iVar1 = (**(code **)(*in_ECX + 0x1c))();
          if (iVar1 == -1) {
            return local_10;
          }
          *param_1 = (char)iVar1;
          local_10 = local_10 + 1;
          bVar2 = param_2 != 0;
          param_2 = param_2 - 1;
          param_3 = param_3 + -1 + (uint)bVar2;
          param_1 = param_1 + 1;
        }
        else {
          if (CONCAT44(param_3,param_2) < lVar3) {
            lVar3 = CONCAT44(param_3,param_2);
          }
          _Size = (uint)lVar3;
          FID_conflict__memcpy(param_1,*(void **)in_ECX[8],_Size);
          local_10 = lVar3 + local_10;
          bVar2 = param_2 < _Size;
          param_2 = param_2 - _Size;
          param_3 = (param_3 - (int)((ulonglong)lVar3 >> 0x20)) - (uint)bVar2;
          *(int *)in_ECX[0xc] = *(int *)in_ECX[0xc] - _Size;
          *(int *)in_ECX[8] = *(int *)in_ECX[8] + _Size;
          param_1 = param_1 + _Size;
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

