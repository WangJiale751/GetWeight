�}�D    �V����$���%�ޚ+�$eXg�L�>40>��yC��%K�I��5ǻ�gY��Si��{��tCɰ/o�&�����M�6��#�%7A"���i1��^��14������\h'�-�t-��@\r����Q����gH�//��F͘��t�-Ε;��*�;Frug�f��a[���Ն�߷��UI᭣�\��@އ�*I>NU�Дqx�p-���t?���Vf6��1|���}�1�=��� g{���Qc�.굣�-;7L�,�"�Zp���<�8F�,�Yi^uai��M�/��|�����>;�1�6�P��J]�L@�E�Hq$��XI�N��))�h�}���f�
�`��R��0�v��յ�뿎�5vB�^jdl�?�)� �����`�IGJo���Y�a�w�o��B��{��Iܠ�O�鞰�yG<���/�H�}�,�!Ca���}�<-��Ly������0YX��Y�g���ؙ�'mgWidth;
	int imgHeight;
	int resultNum;    //output    ���thingcode������ ����ͣ�͵�Ϊ5ͨ����  �ΰ�Ϊ1ͨ��
	IMAGETYPE imageType; //����ͼ���ʽ
}AlgoParams;
extern "C" {
	//�㷨��ʼ������
	EXPORT_API bool AlgoSettings(const char *jsonPath);
	//�㷨ִ�к���
	EXPORT_API void Compute(void *param);
	//��Դ�ͷź���
	EXPORT_API void Release(void *param);
	EXPORT_API int GetArea(cv::Mat Picture, int ImgFlip, int FilpShow);
}
