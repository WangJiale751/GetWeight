�}�D    �J�2��`�^$��_%��J45%�Yk\\���d�kڧ�~�O�[�ze���G]>�-x���w��F��j4d��o�4��T!�G�ŀ����m�u&�F�ױ�V�����������?Ĉ8�������t���+�z��9?�X��kހo�����vj�Q 뎭��&ZH�a��md*#�&���[���,���&�G��w�-�uM-+keNə��=h����И�k�G�F�1� ,h�x3Yk��P�^�A�O ��~����gֻ�X���H-Ò�G����TO�r"����X��*T����l�j�߷s�����Ƭ��(����\�F
���ϺI����ҩ<빣$.�3�v�Ogi3c�Sf���nD��
��S�h��4���F��I|�'o���Y�a�w�o��B��{��Iܠ�O�鞰�yG<���/�H�}�,�!Ca���}�<-��Ly������0YX��Y�g���ؙ�'l�*���e�۝���9ʺfآ�B�S��kh6k�W���R��	/��n(����������.x�fX;�d�#��DSi��o���O&��긎N?t޳EW`7��I������׺�]/��[��w���we&Y�qK7�':�y߀!qܜ���s-�]�!����Cq���1	q�䨞o杕h�8L�f+iW�W+���;6������+�%u�Hb����G��pg�T�Zď�6a��t��靕y�wJ>$����7M9���Wu��a��n��b$:^)X%Rj^'�f
�;}f�P���(��%<�;�A��HQG՜��p-��1�+�ȟ
 :����>\�U��� ��P�ڐ�����s�����U����j����jϦ���QEo6pB	6����M�l����r�X�ߤ�����BC.���-�����/�&eVo�KF�i�8�F�"�d5�RF2���!hc���e1��A`�@��%�u�`��c�Lဿ���lD7��c:����$��TE��b�d��W?�#u�������Aw�	ڒ�@�Z2qAFs^�A��l�e���%�fq>3*'rڠt������Ə�"��^��WA��iݛ(Y��2�[9���L��j=RG�PaZ,�-(����o�n+%G��^ �?R-$a��%�De�	����6[�a�}�)y��u�� l��zTh���!�]x��f�U!�����c�s$
��u2�i��� t�����=B���E�d�b�g������������xC����/.���:4��UV��A@�3�K�	ĽK�y��s�ݾ"[��HI�ت9RC$��9�@=���D����|EW��Mx�tw��X���&/΅��1��y&�	�����@�u�6B�)��WR�^OIAh�e��7F�D��BE[��q�& �J[3)��*��xPM�vo�sfM�%S�+�/g����.Z6�WY������'	d���ї��ע�T�U)e������{l5*���H�dJ��#+;�Q��qb����#��]�VϠ�:t�Y�3�����D^������X���8l�%�8I�b�;�� ��8��9��r
w��r���W,���UzѷE�.s���xY!�,�����i�X�&-B���r �p�;jA7.�����}�w V�b_�g�g��,|��¬��.�>��О���i��;�Y�#��i?(�%X�z:)��܁^b���k�Z���/Swt=�!���צ��v7:%N�'�)d��
T�e��3Gz0>u��A?�Ki��$ �Xo�#\���0�e�19w�>媹��"HNE;ΌkSc	����:�4%ɤm?8sM��I|���ވsQ��B�_^����O.��OX��}�Ji�4.?��pf�;13�,6=W��&4��:�Aѐ�#�ި��: �~�Au��-�?M��q��$o]�7��Ѹ<�A�OI��*�ٹ Za��97.�W�C8+/s�B��,l��
	// ��ȡ˲ʱֵ���ۼ�ֵ
	Area.VolumeOfInstant = volume[0];
	Area.VolumeOfAdd = volume[1];
	ap->resultNum = 3;
	ap->result = new std::string[ap ->resultNum];
	ap->result[0] = std::string((char *)&Area, sizeof(Area));
	// �������ͼ����������ȡ�����������ֵ
	//int AreaLaser = ImgProcess(NewImg); // ��ü����ߵ������������ ��λmm^2
	NewImg.release();
	//return area;
}
