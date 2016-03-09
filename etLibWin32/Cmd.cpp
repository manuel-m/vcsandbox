
#include "Cmd.h"

using namespace et;

const std::string Cmd::label_default = std::string("default");

Cmd::Cmd() :
	m_label(Cmd::label_default),
	m_label_len(0),
	m_label_len_valid(false)
{}

Cmd::Cmd(const Cmd& cmd_) :
	m_label(cmd_.m_label),
	m_label_len(0),
	m_label_len_valid(false)
{}

Cmd::Cmd(const std::string & str_) :
	m_label(str_),
	m_label_len(0),
	m_label_len_valid(false)
{}

const std::string &  Cmd::getLabel() const {
	return m_label;
}

void Cmd::setLabel(const std::string & label_) {
	m_label = label_;
	m_label_len_valid = false;
}

std::size_t Cmd::getLabelLen() const {
	if (!m_label_len_valid) {
		m_label_len = m_label.length();
		m_label_len_valid = true;
	}
	return m_label_len;
}

std::size_t Cmd::getLabelLen() {
	return static_cast<const Cmd&>(*this).getLabelLen();
}