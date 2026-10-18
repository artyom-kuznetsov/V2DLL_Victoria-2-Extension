// FUN_006cb370 @ 006cb370 body=[[006cb370, 006cb3ba] [006cb3bd, 006cb3f5]]


/* WARNING: Removing unreachable block (ram,0x006cb39f) */

void FUN_006cb370(int param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = in_ECX[1] - *in_ECX >> 2;
  if (0x3fffffffU - param_1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  if ((uint)(in_ECX[2] - *in_ECX >> 2) < uVar2) {
    uVar1 = FUN_006cb580(uVar2);
    FUN_006cb400(uVar1);
  }
  return;
}

