// FUN_006cb400 @ 006cb400 body=[[006cb400, 006cb452] [006cb458, 006cb4c2]]


/* WARNING: Removing unreachable block (ram,0x006cb43a) */

void FUN_006cb400(uint param_1)

{
  void *_Dst;
  int *in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a390;
  pvStack_10 = ExceptionList;
  if (0x3fffffff < param_1) {
    ExceptionList = &pvStack_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if (param_1 <= (uint)(in_ECX[2] - *in_ECX >> 2)) {
    return;
  }
  ExceptionList = &pvStack_10;
  _Dst = (void *)_Allocate<>(param_1,0);
  local_8 = 0;
  FID_conflict__memcpy(_Dst,(void *)*in_ECX,(in_ECX[1] - *in_ECX >> 2) << 2);
  FUN_006cb4e5();
  return;
}

