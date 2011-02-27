Stresser::Stresser()
{
	stresser_type.assign("Generic stresser");
};

Stresser::~Stresser() { };

string* Stresser::get_stresser_type()
{
	return &stresser_type;
};

void Stresser::attach(Logger* new_logger)
{
	logger = new_logger;
};

void Stresser::set_current_stress(ElasticNode* cur_node, ElasticNode* new_node, float current_time)
{
	if((cur_node == NULL) || (new_node == NULL))
		return;
	// TODO Begin hardcoded tmp impl
	float max_time = 0.1;
	if(current_time > max_time)
		return;

//	if ( ( (cur_node->coords[0])*(cur_node->coords[0]) + (cur_node->coords[1])*(cur_node->coords[1])
//		+ (cur_node->coords[2])*(cur_node->coords[2]) ) < 4 )
	if( (cur_node->coords[0] < -3.8) && (fabs(cur_node->coords[1]) < 3) && (fabs(cur_node->coords[2]) < 3) )
	{
		new_node->values[0] = 0;
		new_node->values[1] = 0;
		new_node->values[2] = 0;
		new_node->values[3] = 10;
		new_node->values[4] = 0;
		new_node->values[5] = 0;
		new_node->values[6] = 0;
		new_node->values[7] = 0;
		new_node->values[8] = 0;
	}
	// TODO End hardcoded tmp impl
};
