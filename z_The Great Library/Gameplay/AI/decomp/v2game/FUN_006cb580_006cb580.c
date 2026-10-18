// FUN_006cb580 @ 006cb580 body=[[006cb580, 006cb5f5]]


/* WARNING: Removing unreachable block (ram,0x006cb5af) */

uint FUN_006cb580(uint param_1)

{
  int *in_ECX;
  uint local_18;
  uint local_8;
  
  local_18 = in_ECX[2] - *in_ECX >> 2;
  if (0x3fffffff - (local_18 >> 1) < local_18) {
    local_18 = 0;
  }
  else {
    local_18 = (local_18 >> 1) + local_18;
  }
  local_8 = local_18;
  if (local_18 < param_1) {
    local_8 = param_1;
  }
  return local_8;
}

